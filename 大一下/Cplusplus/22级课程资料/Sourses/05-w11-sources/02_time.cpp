#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

class Time
{
public:
    void Set(int hours, int minutes, int seconds);
    void Increment();
    void Write() const;
    Time(int initHrs, int initMins, int initSecs);  // constructor 
    Time(); 	   //  default constructor

private:
    int hrs;
    int mins;
    int secs;
};

enum  ZoneType { EST, CST, MST, PST, EDT, CDT, MDT, PDT };

class ExtTime: public Time	// Time is the base class
{
public:
    ExtTime(int initHrs, int initMins, int initSecs, ZoneType initZone);      // constructor
    ExtTime(); 			             // default constructor
    void Set(int hours, int minutes, int seconds, ZoneType timeZone);
    void Write() const;

private:
    ZoneType  zone; 	//  added data member
};

Time::Time(int initHrs, int initMins, int initSecs)
{
    hrs = initHrs;
    mins = initMins;
    secs = initSecs;
}

Time::Time()
{
    hrs = 0;
    mins = 0;
    secs = 0;
}

void Time::Set(int hours, int minutes, int seconds)
{
    hrs = hours;
    mins = minutes;
    secs = seconds;
}

void Time::Increment()    //  IMPLEMENTATION FILE ( time.cpp )
{
    secs++;
    if (secs > 59)
    {
        secs = 0;
        mins++;
        if (mins > 59)
        {
            mins = 0;
            hrs++;
            if (hrs > 23)
                hrs = 0;
        }
    }
}

void Time::Write() const
{
    if (hrs < 10)
        cout << '0';
    cout << hrs << ':';
    if (mins < 10)
        cout << '0';
    cout << mins << ':';
    if (secs < 10)
        cout << '0';
    cout << secs;
}


ExtTime::ExtTime(int initHrs, int initMins, int initSecs, ZoneType initZone) : Time(initHrs, initMins, initSecs)
{
    zone = initZone;
}

ExtTime::ExtTime()
{
    zone = EST;
}

void ExtTime::Set(int hours, int minutes, int seconds, ZoneType timeZone)
{
    Time::Set(hours, minutes, seconds);   //调用基类函数。Why?
    zone = timeZone;
}

void ExtTime::Write() const
{
    static string zoneString[8] = {"EST", "CST", "MST", "PST", "EDT", "CDT", "MDT", "PDT"};

    Time::Write();
    cout << ' ' << zoneString[zone];
}

int main()
{
    ExtTime time1(5, 30, 0, CDT);
    ExtTime time2;
    int     count;
//time1.Set(1,1,1);
    cout << "time1: ";
    time1.Write();
    cout << endl;
    
    cout << "Incrementing time2:" << endl;
    for (count = 1; count <= 10; count++)
    {
        time2.Write();
        cout << endl;
        time2.Increment();
    }

    Time time3(1, 2, 3);
    cout << "time3: ";
    time3.Write();
    cout << endl << endl;

    //客户代码直接访问派生类继承的基类的public 成员

    time1.Time::Set(3, 4, 5);
    time1.Time::Write();

    cout << endl;

    return 0;
}
