#include<stdio.h>
#include<assert.h>

int max_min(int *nums, int n, int (*select)(int,int));

int max(int a,int b) {
    return a>b?a:b; 
}

int min(int a,int b) {
    return a>b?b:a; 
}

int main() {
	int a[10] = {1,3,7,2,6,8,10,15,9,18};
	int n = sizeof(a)/sizeof(int);
	int expected_max=18;
	int expected_min=1;
	
    assert(max_min(a,n,max)==expected_max);
    assert(max_min(a,n,min)==expected_min);
    
	return 0; 
}

int max_min(int *nums, int n, int (*select)(int,int)) {
    assert(nums && n>1);
    int temp = *nums++;
    for (int i=1; i<n; i++) {
        temp=(*select)(temp,*nums++);
    }
    return temp;
}
