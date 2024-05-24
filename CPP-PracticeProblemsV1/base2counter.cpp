/*TODO: given an integer n, find exponent of the largest power of 2 that divides n. 
Example, if n = r^8 with r odd, then you should output 3 because 8 = 2^3. You are
just recovering the exponent of the 2 in the numbers factorization into primes.*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main() {
    int n;
    cout << "Enter an integer n: ";
    cin >> n;

    int exponent = 0;
    while (n % 2 == 0) {
        n = n / 2;
        exponent++;
    }

    cout << "Exponent of the largest power of 2 that divides " << n << " is: " << exponent << endl;
    return 0;
}

/*so basically, we have an integer n and the user is entering that number. 
we then declare an int exponent and set it equal to 0. since we want to find
the largest power of 2 we check is n is divisible by 2. and if it is, the
exponent increases. it keeps going until n is no longer divisible by 2
*/
