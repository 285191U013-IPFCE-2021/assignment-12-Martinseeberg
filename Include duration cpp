#include <chrono>
#include <thread>
#include <iostream>
#include "Duration.h"
#include <assert.h>
using namespace std;

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
    time++; // Incrementing by 1.d

    if (time > alarm)
    {
        alarmHasBeenSet = true;

        alarm = 0;
    }
    else
    {
        alarmHasBeenSet = false;
    }

    return alarmHasBeenSet; // returning boolean
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
