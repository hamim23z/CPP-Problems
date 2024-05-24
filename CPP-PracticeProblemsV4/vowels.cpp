/*TODO: Write a function that takes a string parameter and returns a boolean value indicating 
whether or not all vowels are present somwehere in the string. For example, if we had the 
string "Hello world", the retuen value should be false. Assume input is all in lower case. 
*/

#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;


bool returnboolvowels(const string& str) {
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    vector<bool> found(5, false);


    for (size_t j = 0; j < str.length(); ++j) {
    char ch = str[j];
    for (size_t i = 0; i < vowels.size(); ++i) {
        if (ch == vowels[i]) {
            found[i] = true;
            break;
        }
    }
}

    for (int i = 0; i < found.size(); ++i) {
        if (!found[i]) {
            return false;
        }
    }
    return true;
}



int main() {
    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput);

    if (returnboolvowels(userInput)) {
        cout << "All vowels are present" << endl;
    } else {
        cout << "Not all vowels found" << endl;
    }
    return 0;
}
