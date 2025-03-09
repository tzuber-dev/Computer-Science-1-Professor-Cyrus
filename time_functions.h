#ifndef TIME_FUNCTIONS_H
#define TIME_FUNCTIONS_H

#include <string>
#include <utility>


std::pair<int, int> parseTime(const std::string& time);


int calculateMinutesDifference(const std::pair<int, int>& startTime, const std::pair<int, int>& endTime);


std::pair<int, int> hoursAndMinutes(int totalMinutes);


double hoursDecimal(int totalMinutes);

#endif 