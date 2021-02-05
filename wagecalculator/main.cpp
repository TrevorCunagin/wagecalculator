/* 
 * File:   main.cpp
 * Author: Trevor Cunagin
 *
 * Created on February 5, 2021, 1:16 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //variables to store user input
    double hourlyWage;
    double hoursWorked;

    //prompt user for hourly wage
    cout << "\nEnter hourly wage: ";
    cin >> hourlyWage; //gets hourly wage from user

    //prompt user for hours worked during the week
    cout << "Enter hours worked this week: ";
    cin >> hoursWorked; //get number of hours worked this week

    //sets constant for the maximum hours worked before overtime
    const double LIMIT = 40.0;

    //gross wages
    double wages;

    if (hoursWorked <= LIMIT) {
        //regular wages for 40 hours or less
        wages = (hoursWorked * hourlyWage);
    }//end if statement
    else //case for employee working overtime
    {
        //wages for the first 40 hours
        wages = LIMIT * hourlyWage;

        //add overtime pay (time and a half)
        wages += (hoursWorked - LIMIT)*(1.5 * hourlyWage);
    } //end else

    //display the gross wages
    cout << "\nGross wages: $" << wages << endl << endl;

    return 0;
}

