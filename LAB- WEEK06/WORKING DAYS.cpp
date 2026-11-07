#include <iostream>
using namespace std;

// Function prototypes
int getYear();
bool isLeap(int year);
void computeWorkDays(bool status, int year);

int main() {
    int year;
    bool status;

    year = getYear();                 // Function call to get year from user
    status = isLeap(year);            // Function call to check leap year
    computeWorkDays(status, year);    // Function call to compute and display working days

    return 0;
}

// Function Definition 1: Get Year
int getYear() {
    int year;
    cout << "Enter year: ";
    cin >> year;
    return year;
}

// Function Definition 2: Determine Leap Year
bool isLeap(int year) {
    bool status;
    if (year % 4 == 0)
        status = true;
    else
        status = false;
    return status;
}

// Function Definition 3: Compute and Display Working Days
void computeWorkDays(bool status, int year) {
    cout << "Working days for " << year << " is ";
    if (status == true)
        cout << 366 - 52 * 2;
    else
        cout << 365 - 52 * 2;
    cout << endl;
    return;
}