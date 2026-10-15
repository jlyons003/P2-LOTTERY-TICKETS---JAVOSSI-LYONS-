// P2 LOTTERY TICKETS - JAVOSSI LYONS PT2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*
    Project: Project 3.2 - Lottery Tickets
    Description: Generates six random numbers from 1 through 9
                 and combines them into a lottery ticket number.
*/

#include <iostream>
#include <string>
#include <random>

using namespace std;

int main()
{
    // Create the random engine and distribution
    random_device rd;
    mt19937 engine(rd());
    uniform_int_distribution<int> number(1, 9);

    // Generate six random integers
    int num1 = number(engine);
    int num2 = number(engine);
    int num3 = number(engine);
    int num4 = number(engine);
    int num5 = number(engine);
    int num6 = number(engine);

    // Convert each number to a string
    string str1 = to_string(num1);
    string str2 = to_string(num2);
    string str3 = to_string(num3);
    string str4 = to_string(num4);
    string str5 = to_string(num5);
    string str6 = to_string(num6);

    // Combine the strings into one lottery ticket number
    string ticketNumber = str1 + str2 + str3 + str4 + str5 + str6;

    // Display the results
    cout << "Welcome to the Lottery Ticket Generator!" << endl;
    cout << "This program generates six random numbers from 1 to 9." << endl;
    cout << "Your lottery ticket number is: " << ticketNumber << endl;

    return 0;
}
