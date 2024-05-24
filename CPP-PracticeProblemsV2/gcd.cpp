/*TODO: Write a program that reads two integers and prints their greatest common divisor. 
Example, if the integers were 12 and 18, then your program should print 6. Just doing it
again as practice*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::min;

int main()
{
    int firstnum;
    int secondnum;
    int gcd;

    cout << "Enter the first number: ";
    cin >> firstnum;

    cout << "Enter the second number: ";
    cin >> secondnum;


    if (firstnum == secondnum) {
        gcd = firstnum;
        cout << "The GCD is: " << gcd << endl;
        return 0;
    }

    for (int i = 1; i<= min(firstnum, secondnum); i++) {
        if (firstnum % i == 0 && secondnum % i == 0) {
            gcd = i;
        }
    }

    cout << "The GCD is: " << gcd << endl;
    return 0;
}
