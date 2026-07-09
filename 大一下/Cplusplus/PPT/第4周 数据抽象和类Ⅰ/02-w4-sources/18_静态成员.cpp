#include <iostream>
using namespace std;

int DaysInMonth( int, int ); 

class DATE                                                                                                   
{
    public:
        DATE( int = 2000, int = 1, int = 1 );
        
        static void getCount();
        
        void Set( int, int, int);
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
        static int count; 
};

int DATE::count = 0;
    
void DATE::getCount() {
    cout<<"There are "<<count<<" objects now."<<endl;
}

DATE::DATE( int initYear, int initMonth, int initDay )                            
{
     year = initYear;  month = initMonth;  day  = initDay;
     count++;
}


int DATE::getMonth() const
{
    return month;
}
int DATE::getDay() const
{
    return day;
}

int DATE::getYear() const
{
    return year;
}

void DATE::Print() const
{
   	switch(month)
    {
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
            cout << "Aguest ";
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
    }
    cout << ' ' << day << ", " << year << endl << endl;
}

void DATE::Increment()
{
    day++;
    if (day > DaysInMonth(month, year))
    {
        day = 1;
        month++;
        if (month > 12)
        {
            month = 1;
            year++;
        }
    }
}

void DATE::Decrement()
{  day--;
    if ( day == 0 )
    {
        if( month == 1 )
        { 
             day = 31;
             month = 12;
             year--;
        }
        else
        {
             month--;
             day = DaysInMonth( month, year );
        }
    }
}

int DaysInMonth( /* in */ int mo, /* in */ int yr  )
{
    switch (mo)
   {
     case 1: case 3: case 5: case 7: case 8: case 10: case 12:
              return 31;
     case 4: case 6: case 9: case 11:
             return 30;
     case 2:  
          if ((yr % 4 == 0 && yr % 100 != 0) ||yr % 400 == 0)
              return 29;
          else
              return 28;
    }
}

int main() {                         //client.cpp 
     DATE  date1;                    //initYear, initMonth, initDay分别为2000，1，1
     date1.getCount();
     
     DATE  date2( 1976 );            //initYear, initMonth, initDay分别为1976，1，1
     DATE::getCount();
     return 0;
     
}
