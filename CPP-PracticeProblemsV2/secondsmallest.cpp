/*TODO: write a small program that will read integers from cin and prints out the
second smallest integer to cout. */

#include <iostream>
#include <limits>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x; //what user inputs
    int small = INT_MAX; //small number. we set it to int max so nothing is larger than that and any value we compare it too is smaller. 
    int secondsmallest = INT_MAX; //this is what we want, should cout this

    while (cin >> x) {
        if (x < small) {
            secondsmallest = small;
            small = x;
        } else if (x < secondsmallest) {
            secondsmallest = x;
        }
    }

    cout << "The second smallest integer is: " << secondsmallest << endl;
    return 0;
}

/*
okay so the main thing in this program is the while loop. as the user in inputting numbers, which is x to standardinput the while loops run. 
let's say I want to input the numbers 1, 2, 3, 4

firstly: x = 1. x is clearly less than small so small = x AND secondsmallest doesnt have a value yet. so we move on. 
second: x = 2. x is not less than 1 (remember that small = 1) so we go to the if else. secondsmallest doesnt have a value yet but we assign 2 to it. so secondsmallest = 2;
third: x = 3; x is not less than 1 (remember that small = 1) so we go to the if else. x is not less than 2 (remember that secondsmallest = 2). so what do we do? ignore and move on
fourth: this is the same case for x = 4. 4 is not less than 1 or 2 (small = 1 and secondsmallest = 2), so we ignore and move on

thats what the program is doing in the while loop. so if I enter 1 2 3 4 for the program, it will say that "The second smallest integer is: 2. And it is true. So we're good.
*/
