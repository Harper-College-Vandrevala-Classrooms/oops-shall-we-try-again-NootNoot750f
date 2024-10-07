#include <iostream>
#include <string>
using namespace std;
//This function is reusable in the way that in the main function you're able to reuse it like change the bounds or change the messages without needing to make something completely new

int superIntPrompt(int &lowerBound, int &upperBound, const string &promptMessage, const string &errorMessage, const int defaultValue) {
        int inputValue;
        string inputString;

        cout << "If you would like to use default bounds, please type 'default', if you would like to use your own, enter 'custom'" << endl;
        cin >> inputString;

        if (inputString == "default") {

                lowerBound = 1;
                upperBound = 100;
        } else if (inputString == "custom") {
                cout << "Please input the lower bound: ";
                cin >> lowerBound;
                cout << "Please input the upper bound: ";
                cin >> upperBound;
        }

        // Input validation loop
        while (true) {
                cout << promptMessage << endl;
                cin >> inputValue;

                // Check if input is within bounds
                if (inputValue >= lowerBound && inputValue <= upperBound) {
                        return inputValue;  // Return valid input
                } else {
                        cout << errorMessage << endl;  // Show error for invalid input
                }
        }
}


string superStringPrompt(const string &promptMessage, const string &errorMessage) {
        string inputValue;
        while (true) {
                cout << promptMessage << endl;
                cin >> inputValue;


                if (inputValue != "") {
                        return inputValue;
                } else {
                        cout << errorMessage << endl;
                }
        }
}

int main() {
int defaultLowerBound = 10;
        int defaultUpperBound = 100;
int integerResultOnTheSuperIntPrompt = superIntPrompt(defaultLowerBound, defaultUpperBound, "Enter a number between your chosen bounds:", "Input not valid, please try again", 100);
        cout << "You entered: " << integerResultOnTheSuperIntPrompt << endl;
        string superStringResultOnTheSuperStringPrompt = superStringPrompt("Please Enter A string that is not empty:", "This string is invalid, please enter something else");
        cout << "You entered: " << superStringResultOnTheSuperStringPrompt << endl;

        return 0;
}




