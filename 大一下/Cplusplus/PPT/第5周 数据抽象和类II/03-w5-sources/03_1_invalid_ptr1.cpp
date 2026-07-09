#include <bits/stdc++.h>
using namespace std;

class DATE
{
public:	
     DATE( int initYear, int initMonth, int initDay );
     DATE();
     void Set( int newMonth, int newDay, int newYear  );
     int getMonth() const;
     int getDay() const;
     int getYear() const;
     void Print() const;
     void Increment();
     void Decrement();

private:
    int month;
    int day;
    int year;		
};

DATE::DATE( int initYear, int initMonth, int initDay ) {
    year = initYear;
    month = initMonth;
    day = initDay;
}

DATE::DATE() {
    year = 1999;
    month = 10;
    day = 1;
}

void DATE::Print() const {
    switch (month) {
        case 1:
            cout << "January ";
            break;
        case 2:
            cout << "February ";
            break;
        case 3:
            cout << "March ";
            break;
        case 4:
            cout << "April ";
            break;
        case 5:
            cout << "May ";
            break;
        case 6:
            cout << "June ";
            break;
        case 7:
            cout << "July ";
            break;
        case 8:
            cout << "August ";
            break;
        case 9:
            cout << "September ";
            break;
        case 10:
            cout << "October ";
            break;
        case 11:
            cout << "November ";
            break;
        case 12:
            cout << "December ";
            break;
        default:
            break;
    }
    cout << day << ", " << year << endl;
}

int main() {
    DATE* date_ptr;     
    DATE* date_ptr2;
    date_ptr = new DATE(1976, 12 ,20);   
    
    date_ptr2 = date_ptr; 
    
    date_ptr -> Print();    //正确
    date_ptr2 -> Print();   //正确

    delete date_ptr;      //将使date_ptr和date_ptr2同时失效

    date_ptr -> Print();    //错误, date_ptr已失效
    date_ptr2 -> Print();  //错误，date_ptr2也已失效

    delete date_ptr2;       //错误，不能再次释放                     
}

