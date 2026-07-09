#include <iostream> 
#include <math.h>

int DaysInMonth( int, int ); 

class DATE {
    public:
		void Set( int, int, int );
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



using namespace std;

void DATE::Set(int newYear, int newMonth,int newDay ) {
    month = newMonth;
    day = newDay;
    year = newYear; 
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



