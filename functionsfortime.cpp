#include "time_functions.h"
#include <cstdlib> 

std::pair<int, int> parseTime(const std::string& time) {
    int hours = std::stoi(time.substr(0, 2));
    int minutes = std::stoi(time.substr(3, 2));
    return std::make_pair(hours, minutes);
}

int calculateMinutesDifference(const std::pair<int, int>& startTime, const std::pair<int, int>& endTime) {
    int startTotal = startTime.first * 60 + startTime.second;
    int endTotal = endTime.first * 60 + endTime.second;
    return endTotal - startTotal;
}

std::pair<int, int> hoursAndMinutes(int totalMinutes) {
    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;
    return std::make_pair(hours, minutes);
}

double hoursDecimal(int totalMinutes) {
    return totalMinutes / 60.0;
}
