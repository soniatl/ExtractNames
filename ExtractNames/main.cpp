//
//  main.cpp
//  ExtractNames
//
//  Created by Sonia Lopchan on 10/23/24.

#include <iostream>
#include <string>
#include "ExtractNames.h"

int main() {
    string fullName;
    
    cout << "Enter your fullname: ";
    getline(cin, fullName);
    
    string firstName, lastName;

    extractFirstLastName(fullName, firstName, lastName);

    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;

    return 0;
}
/*
 Output of the program
 
 Enter your fullname: Sonia Lopchan Tamang
 First Name: Sonia
 Last Name: Lopchan Tamang
 Program ended with exit code: 0
 
 */
