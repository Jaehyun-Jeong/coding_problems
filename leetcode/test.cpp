#include <iostream>
#include <string>
using namespace std;

int main(){

    const string monthName[] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    int daysIn[12] = {31, 28, 31, 31, 31, 30, 31, 31, 30, 31, 30, 31};
    const int knightDx[8] = {2, 2, -2, -2, 1, 1, -1, -1};
    const int knightDy[8] = {1, -1, 1, -1, 2, 2, 2, -2};

    return 0;
}
