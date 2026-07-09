//client.cpp
#include <iostream>
#include "DATE.hpp"

using namespace std;

int main()
{
     DATE date1, date2;
     int tmp;

     date1.Set( 1999, 10, 1 );
     date1.Print();
     date1.Increment();
     date1.Print();

     date2.Set( 1997, 7, 1 );
     date2.Print();
     date2.Decrement();
     date2.Print();

     tmp = date1.getYear();
     tmp++;
     date1.Set( tmp, 12, 20 );
     date1.Print();

     //cout << date1.year;  

     return 0;
}

