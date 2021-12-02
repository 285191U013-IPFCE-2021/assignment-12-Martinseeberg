#include <chrono>
#include <thread>
#include <assert.h>
#include "Duration.h"
//#include "Duration.cpp"

#include <iostream>
#include <iomanip>
using namespace std;

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
