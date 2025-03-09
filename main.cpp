#include <iostream>
#include <string>
#include "time_functions.h"

using namespace std;

int main() {
    std::string time1;
    std::string time2;

    cout << "Welcome to the Time Interval Calculation Program! (TICP) \n"<<std::endl;

    cout << "Provide the first time:  ";
    cin >> time1;

    cout << "Provide the second time:  ";
    cin >> time2;

    std:pair<int, int> startTime = parseTime(time1);
    std::pair<int, int> endTime = parseTime(time2);

    int minutesDiff = calculateMinutesDifference(startTime, endTime);
    std::pair<int, int> hm = hoursAndMinutes(minutesDiff);
    int hours = hm.first;
    int minutes = hm.second;
    double hoursDec = hoursDecimal(minutesDiff);

    cout << "The time interval can be written as:"<<std::endl;
    cout << "  1) " << minutesDiff << " minutes\n";
    cout << "  2) " << hours << " hours and " << minutes << " minutes\n";
    cout << "  3) " << hoursDec << " hours\n";

    cout << "Thank you for using the TICP!\n";

    return 0;
}
