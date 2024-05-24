/*TODO: Write a program that will read an integer from cin and print out the sum of the first n squares*/

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter an integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum = sum + (i * i);
    }

    cout << "The sum of the first n squares is: " << sum << endl;
    return 0;

}
