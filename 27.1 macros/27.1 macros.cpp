#include <iostream>

#define DAY_OF_WEEK(n) \
   (n == 1 ? "Monday" : \
    n == 2 ? "Tuesday" : \
    n == 3 ? "Wednesday" : \
    n == 4 ? "Thursday" : \
    n == 5 ? "Friday" : \
    n == 6 ? "Saturday" : \
    n == 7 ? "Sunday" : \
    "?")

#define PRINT_DAY(day) \
    std::cout << DAY_OF_WEEK(day) << std::endl;

int main() {
    int day;
    std::cout << "Enter the day of the week as its ordinal number (1-7): ";
    std::cin >> day;
    PRINT_DAY(day);
    return 0;
}