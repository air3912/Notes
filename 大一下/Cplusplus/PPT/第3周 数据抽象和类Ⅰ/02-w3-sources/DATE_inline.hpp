#pragma once 
#include<iostream>
using namespace std;

int DaysInMonth( int, int ); 

class DATE {
    public:
		void Set(int newYear, int newMonth,int newDay ) {
            month = newMonth;
            day = newDay;
            year = newYear; 
        }
        
        int getMonth() const {
            return month;
        }
        int getDay() const {
            return day;
        }
        int getYear() const {
            return year;
        }
        
        void Print() const {
            const char* MONTHS[] = {"January","February",
            "March","April","May","June","July","Aguest",
            "September","October","November","December"}; 
            cout << MONTHS[month-1] << ' ' << day << ", " 
                 << year << endl << endl;
        }

        void Increment() {
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
        
        void Decrement() {  
            day--;
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
        
    private:
        int month;
        int day;
        int year;	
};



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


