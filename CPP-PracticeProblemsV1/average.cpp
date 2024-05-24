/*TODO: Write a small program that reads 3 integers from standard input and prints the average of those integers.*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int firstnum;
    int secondnum;
    int thirdnum;

    cout << "Enter the first number: " << endl;
    cin >> firstnum;

    cout << "Enter the second number: " << endl;
    cin >> secondnum;

    cout << "Enter the third number: " << endl;
    cin >> thirdnum;

    float average;
    average = static_cast<int>((firstnum+secondnum)+thirdnum) / 3;

    cout << "The average of these three numbers is: " << average << "\n";
    return 0;
}


/*
MY INTERPRETATION: The problem is asking to take 3 integers from standard input. Since it is not asking for a bunch, 
I decided to ask the user for their three numbers to make it more user friendly. I declare three variables of int, 
and then cin >> their name after the cout so the user can enter. 

Considering that the average is not always an integer, I make a variable called average and make it a float. 
Since we have an int, typecast the variables for the numbers and divide by 3 to find the average. 
*/
