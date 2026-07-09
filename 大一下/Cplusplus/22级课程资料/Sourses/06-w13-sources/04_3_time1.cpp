#include <ctime>
#include <iostream>

using namespace std;

class Time
{
public:
    int hour, minute, second;
    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    void write() const
    {
        printf("%02d:%02d:%02d", hour, minute, second);
    }
};

class ExtTime : public Time // Time类是基类
{
public:
    string TZ;
    ExtTime(int h, int m, int s, string tz)
        : Time(h, m, s)
    {
        TZ = tz;
    }
    void write() const
    {
        Time::write();
        cout << " " << TZ;
    }
};

void print(Time someTime)
{
    cout << "Time is  ";
    someTime.write();
    cout << endl;
}

int main()
{
    Time startTime(8, 30, 0);
    ExtTime endTime(10, 45, 0, "CST");

    print(startTime);
    print(endTime);
}
