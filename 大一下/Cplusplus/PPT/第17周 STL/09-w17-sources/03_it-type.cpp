#include<iostream>
#include<vector>
#include<set>
#include<forward_list>
#include<list>
using namespace std;

int main() {
	// DEMO1: read only iteraator
	const vector<int> iv {1,2,3,4,5,6,7};
	auto it1 = iv.begin();  
	// *it1 = 3; // error: assignment of read-only location

	set<int> is {1,2,1,3,1,4};
	auto it2 = is.begin();
	// *it2 = 5;  // error: assignment of read-only location
	
	// DEMO2: forward, bidirection, random
	forward_list<int> ifl {1,2,3,4,5,6,7};
	list<int> ils {11,12,13,14,15,16,17};
	
	auto it3 = ifl.begin();
	it3++;
	// it3--;  // error: no 'operator--(int)' declared
	auto it4 = ils.begin();
	it4++; it4--;
	// it4 += 7;  // error: no match for 'operator+='
	it1 += 7;
	
	//Demo3: iterating over the elements
	auto _begin = ils.begin();
	auto _end = ils.end();
	for (auto it = _begin; it != _end; it++) {
		auto x = *it;
		cout << x << ","; 
	}
	cout << endl;
	
	for (auto x:ils) {
		cout << x << ",";
	}
	cout << endl;
	
	//Demo4: ref invalid
	vector<int> ivv {1,2,3};
	cout << ivv.capacity() << endl;
	//ivv.push_back(0);
	auto it_ivv = ivv.begin();
	int x = *it_ivv;
	for (int i = 0; i<=10; i++) {
		ivv.push_back(0);
		//cout << ivv.capacity() << endl;
		if (*it_ivv != x) {
			cout << *it_ivv << " at " << i << endl;
			break;
		}
	}
	
	//EX: delete all 3 in vector. 
	// 1.请指出程序中的缺陷，并指出数据案例说明
	// 2.请改正该程序 
	vector<int> ivv1 {1,2,3,4,3,3};
	for (auto it = ivv1.begin(); it != ivv1.end(); it++) {
		if (*it == 3) ivv1.erase(it);  
	}
	for (auto x : ivv1) cout << x << ",";
	cout << endl; 
} 