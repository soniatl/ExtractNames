//
//  ExtractNames.h
//  ExtractNames
//
//  Created by Sonia Lopchan on 10/24/24. (used ChatGPT AI to build .h file)

using namespace std;

void extractFirstLastName(const string& fullName, string& firstName, string& lastName) {
    // Find the position of the first space
    size_t firstSpace = fullName.find(' ');

    // If there is no space, treat the whole name as the first name
    if (firstSpace == string::npos) {
        firstName = fullName;
        lastName = "Not provided";  // No last name
    } else {
        firstName = fullName.substr(0, firstSpace); // Extract first name
        lastName = fullName.substr(firstSpace + 1); // Extract last name
    }
}
