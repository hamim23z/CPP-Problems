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
   
   int x;
   int steps = 0;
   cout << "Enter an integer: ";
   cin >> x;

   if (x == 1) {
      cout << "Number of steps: " << steps << endl;
      return 0;

   } else if (x % 2 == 0 ) {
      cout << "The integer you entered is even." << endl;
      x = x / 2;
      cout << x << endl;
      
   } else if (x % 2 != 0) {
      cout << "The integer you entered is odd." << endl;
      x = (x*3) + 1;
      cout << x << endl;

      steps++;
   }

   cout << "The number of steps required is: " << steps << endl;
   return 0;
} 
