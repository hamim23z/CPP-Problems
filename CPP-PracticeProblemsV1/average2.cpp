/*TODO: Write a small program that reads integers from standard input and prints the average of those integers.*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x; //user inputting numbers
    int sum = 0; //the sum of all the numbers the user input, it starts at 0 because user has not inputted any numbers
    int counter = 0; //the counter of how many numbers the user has inputted

    while (cin >> x) { 
        sum = sum + x;
        counter++;
    }

    double average = static_cast<double>(sum) / counter;

    cout << "The average of these numbers are: " << average << endl;
    return 0;
}
