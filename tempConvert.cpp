// Copyright (c) 2025. Joseph Wondimagnehu. All rights reserved.
//
// Created by: Joseph Wondimagnehu
// Date: May 6, 2025
/* This program converts the inputted celsius
from the user to fahrenheit. */

/* Include windows header file for changing the
console output page. */
#include <windows.h>
/* Include the iostream library for
input and output functionalities. */
#include <iostream>
/* Include the string library to
adhere to style guidelines. */
#include <string>

// Define the fahrenheit function.
void fahrenheit() {
    /* Call the console output page function to
    allow unicode to be displayed in the terminal.
    ONLY for Windows. */
    SetConsoleOutputCP(CP_UTF8);

    // Declare the celsius input of the user as a string.
    std::string userCelsiusStr;
    // Ask the user for the temperature in celsius.
    std::cout << "\nEnter the temperature (°C): ";
    // Store the input in the user celsius string.
    std::cin >> userCelsiusStr;

    // Try to check the validity of the user input.
    try {
        // Attempt to convert the entered string into a float.
        float userCelsiusFloat = std::stof(userCelsiusStr);
        /* Convert the celsius float to fahrenheit
        with the conversion formula. */
        float fahrenheitConversion = (9.0 / 5.0) * userCelsiusFloat + 32;

        // Display the fahrenheit conversion result to the user.
        std::cout << "\n" << userCelsiusFloat << "°C" <<
        " is equal to " << fahrenheitConversion << "°F.\n";
    }
    /* Runs if std::stof() could not convert the user's string
    input into a float. */
    catch (std::invalid_argument) {
        // Display to the user that they did not enter a valid number.
        std::cout << "\n" << userCelsiusStr << " is not a valid number.\n";
    }
}

// Runs the main function.
int main() {
    // Call the fahrenheit function to execute the conversion process.
    fahrenheit();
}
