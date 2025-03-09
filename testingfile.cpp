#ifdef RUN_TESTS

#include <cassert>
#include <iostream>
#include "time_functions.h"

void testParseTime() {
    std::pair<int, int> result = parseTime("12:40");
    assert(result.first == 12 && result.second == 40);

    result = parseTime("18:24");
    assert(result.first == 18 && result.second == 24);
}

void testCalculateMinutesDifference() {
    std::pair<int, int> startTime = std::make_pair(12, 40);
    std::pair<int, int> endTime = std::make_pair(18, 24);
    int diff = calculateMinutesDifference(startTime, endTime);
    assert(diff == 344);
}

void testHoursAndMinutes() {
    std::pair<int, int> hm = hoursAndMinutes(344);
    assert(hm.first == 5 && hm.second == 44);
}

void testHoursDecimal() {
    double hdec = hoursDecimal(344);
    // Allow for floating-point precision differences.
    assert(hdec > 5.72 && hdec < 5.74);
}

int main() {
    testParseTime();
    testCalculateMinutesDifference();
    testHoursAndMinutes();
    testHoursDecimal();

    std::cout << "Tests are good! Nice!.\n";
    return 0;
}

#endif // RUN_TESTS
