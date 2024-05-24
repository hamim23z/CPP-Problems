/*TODO: Write a program to test the collatz conjecture, this conjecture
considers the following process:
-- if n == 1, stop
-- if n is even, divide it by 2
-- if n is odd, multiply n by 3 and then add 1

Your program should work as follows:
1. read an integer
2. see how many steps the above process takes
3. print the number of steps
4. go back until stdin has no more integers
*/

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
    int n;
    while (cin >> n) {
        int steps = 0;
        
        while (n != 1) {
            if (n % 2 == 0) {
                n = n / 2;
            } else {
                n = (3*n) + 1;
            }
            steps++;
        }

        cout << "Number of steps is: " << steps << endl;
    }
}
