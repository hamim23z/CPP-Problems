/*TODO: Write a program to compute and then print the sum of all integers given on standard input*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x;
    int sum = 0;

    while (cin >> x) {
        sum = sum + x;
    }

    cout << "The sum of all entered integers is: " << sum << endl;
    return 0;
}
