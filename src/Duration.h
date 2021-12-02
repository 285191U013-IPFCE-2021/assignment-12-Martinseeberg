
#include <chrono>
#include <thread>
#include <assert.h>
//#include "Class.h"
//#include "Duration.cpp"

#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
private:
    int time;
    int dt;
    int alarm;
    int set;
    bool alarmHasBeenSet;

public:
    //constructor with default value 0.
    Time(int s = 0);
    //setter function
    void setTime(int s);
    //print description of object in hh:mm:ss
    void print();
    //compare two time object
    // tick for incrementing time by 1
    bool tick();
    bool checkAndUpdateAlarm(int dt);
    void setalarm(int t);
};
