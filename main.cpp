#include <iostream>
using std::cout;
using std::endl;
using std::string;

// Define constants
const char SEMI_COLON = ';';
const string VERB1 = "went up ";
const string VERB2 = "down came ";
const string VERB3 = "washed ";
const string VERB4 = "out came ";
const string VERB5 = "dried up ";

int main(void) {
    // Declare string variables
    string firstLine;
    string secondLine;
    string thirdLine;
    string fourthLine;

    // Concatenate string literals with predefined string constants
    firstLine = "The itsy bitsy spider " + VERB1 + "the water spout";
    secondLine = VERB2 + "the rain and " + VERB3 + "the spider out";
    thirdLine = VERB4 + "the sun and " + VERB5 + "all the rain";
    fourthLine = "and the itsy bitsy spider " + VERB1 + "the spout again";

    // Output the lines
    cout << firstLine << SEMI_COLON << endl;
    cout << secondLine << SEMI_COLON << endl;
    cout << thirdLine << SEMI_COLON << endl;
    cout << fourthLine << '.' << endl;

    return 0;
}
