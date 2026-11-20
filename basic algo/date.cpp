#include <iostream>
#include <string>
#include <vector>  // Including the vector library for using vectors

using namespace std; 

// Function to find the day of the week for a given date
std::string day_of_the_week(std::string day) {
    int month = stoi(day.substr(0, 2));   // Extracting the month from the date string and converting it to an integer
    int _day = stoi(day.substr(3, 2));    // Extracting the day from the date string and converting it to an integer
    int year = stoi(day.substr(6, 4));    // Extracting the year from the date string and converting it to an integer

    // Vector storing the number of days in each month
    vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

    // Vector storing the names of the days in a week
    vector<string> dates = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    int d = _day;   // Initialize the total days with the given day of the month

    // Calculate the total number of days considering the months before the given month
    for (int i = 0; i < month - 1; i++) 
        d += days[i];

    // Adjust for leap years, adding an extra day for February if the year is a leap year and the month is after February
    if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && month > 2) 
        d++;

    // Calculate the total days considering the years before the given year
    for (int i = 1971; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) 
            d += 366; // Leap year
        else 
            d += 365; // Non-leap year
    }

    // Calculate the day of the week using the obtained total days, adjusting with a fixed offset
    string result = dates[(d % 7 + 3) % 7];
    return result; // Return the day of the week
}


int main() {
    string date1, date2, date3, date4; // Declare strings to store different dates

    date1 = "02/05/1980"; // Assign a date
    cout << "Date: " << date1 << "  Day of the week: " << day_of_the_week(date1); // Display the date and its corresponding day of the week

    date2 = "01/24/1990"; // Assign a date
    cout << "\nDate: " << date2 << "  Day of the week: " << day_of_the_week(date2); // Display the date and its corresponding day of the week

    date3 = "01/05/2019"; // Assign a date
    cout << "\nDate: " << date3 << "  Day of the week: " << day_of_the_week(date3); // Display the date and its corresponding day of the week

    date4 = "11/17/2022"; // Assign a date
    cout << "\nDate: " << date4 << "  Day of the week: " << day_of_the_week(date4); // Display the date and its corresponding day of the week

    return 0; 
}

