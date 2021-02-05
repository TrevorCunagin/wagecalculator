/* 
 * File:   main.cpp
 * Author: Trevor Cunagin
 *
 * Created on February 5, 2021, 1:16 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

double calculatePay(double hours, double wages) {
    double total; //gross wages for the week

    //sets constant for the maximum hours worked before overtime
    const double LIMIT = 40.0;

    if (hours <= LIMIT) {
        //regular wages for 40 hours or less
        total = hours * wages;
    }//end if statement
    else //case for employee working overtime
    {
        //wages for overtime case, first 40 hours plus time and a half
        total = (LIMIT * wages) + (hours - LIMIT)*(1.5 * wages);

    } //end else

    return total;
}

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

    double totalWages = calculatePay(hoursWorked, hourlyWage);
    
    //specify output format
    cout << fixed << setprecision(2);

    //display the gross wages
    cout << "\nGross wages: $" << totalWages << endl << endl;
    
    return 0;
}

