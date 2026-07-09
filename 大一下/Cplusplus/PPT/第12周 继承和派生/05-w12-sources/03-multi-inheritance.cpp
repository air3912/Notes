#include <iostream>
using namespace std;

class Device1 {
public:
    Device1()
    {
        volume = 5;
        powerOn = false;
    }
    Device1(int vol, bool onOrOff)
    {
        volume = vol;
        powerOn = onOrOff;
    }

    void showPower()
    {
        cout << "The status of the power is :";
        switch (powerOn) {
        case true:
            cout << "Power on. \n";
            break;
        case false:
            cout << "power off. \n";
            break;
        }
    }

    void showVol()
    {
        cout << "Volume is " << volume << endl;
    }

protected:
    int volume;                // 音量
    bool powerOn;          // 开关状态
};

class Device2 {
public:
    Device2()
    {
        talkTime = 10;
        standbyTime = 300;
        power = 100;
    }

    Device2(int newTalkTime, int newStandbyTime, float powerCent)
    {

        talkTime = newTalkTime;
        standbyTime = newStandbyTime;
        power = powerCent;
    }

    void showProperty()
    {
        cout << "The property of the device : " << endl;
        cout << "talk time: " << talkTime << " hours" << endl;
        cout << "standbyTime: " << standbyTime << " hours" << endl;
    }

    void showPower()
    {
        cout << " Power: " << power << endl;
    }

protected:
    int  talkTime;                        //可通话时间（小时）
    int  standbyTime;                //可待机时间（小时）
    float power;                          //剩余电量百分比
};

class DeviceNew : public Device1, public Device2 {
public:
    DeviceNew()
    {
        weight = 0.56;
    }

    DeviceNew(float newWeight, int vol, bool onOrOff, int newTalkTime,
        int newStandbyTime, float powerCent) :
        Device2(newTalkTime, newStandbyTime, powerCent),
        Device1(vol, onOrOff)
    {
        weight = newWeight;
    }

    float getWeight()
    {
        return weight;
    }

private:
    float weight;              // 重量（克）
};

int main()
{
    DeviceNew  device(0.7, 3, false, 10, 250, 80);         //声明派生类对象

    // getWeight()函数是DEVICE_NEW类自身定义的
    cout << "The weight of the device : " << device.getWeight() << endl;

    // showVol()函数是从DEVICE1类继承来的
    device.showVol();

    // showProperty()函数是从DEVICE2类继承来的
    device.showProperty();

    return 0;
}


