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
    //constructor with default value 0
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

Time ::Time(int s)
{
    time = s;
}

void Time ::setTime(int s)
{
    time = s;
}
bool Time::tick()
{
    time++; // Incrementing by 1

    if (time > alarm)
    {
        alarmHasBeenSet = true; // If alarm is higher than time, it should be reset.

        alarm = 0; // resetting to 0
    }
    else
    {
        alarmHasBeenSet = false; // Otherwise false.
    }

    return alarmHasBeenSet;
}

bool Time::checkAndUpdateAlarm(int dt)
{
    assert(dt > 0); // Asserting dt has to be greater than 0
    time = time + dt;
    if (time > alarm)
    {
        alarmHasBeenSet = true;

        alarm = 0; // Resetting the alarm if time exceeds alarm.
    }
    else
    {
        alarmHasBeenSet = false;
    }

    return alarmHasBeenSet; // returning boolean of alarmHasBeenSet.
}

void Time::setalarm(int set)
{
    alarm = set; // setting alarm = set
}

void Time ::print() // Function to print time
{
    cout << "Time is: " << time << "s"
         << "\n";
}

// File for sandboxing and trying out code
int main(int argc, char **argv)
{
    bool temp; // Storing boolean of tick, where it gets the value true or false
    Time t1(20);
    t1.setalarm(40);                   // Setting alarm to 40, so it should not be set in the if else statement.
    t1.tick();                         // Incrementing time by 1 so time = 21
    temp = t1.checkAndUpdateAlarm(10); // Adding 10s so time = 31s, and setting temp = to the boolean.
    t1.print();                        // 31s

    if (temp == true) // Checking if temp boolean is true or false and printing accordently. Here i set it to 40, so the alarm will not be set.
        cout << "The alarm has been set \n";
    else
        cout << "The alarm has not been set \n";
    return 0;
}
