/*TODO: write a program that computes the difference of the sum of
all the evens and the odds. Example, if the input were 4 7 6, then 
the output would be (4+6)-7 = 3. You can use % operator, this is best*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x;
    int evens = 0;
    int odds = 0;

    while (cin >> x) {
        if (x % 2 == 0) {
            evens = evens + x;
        } else if (x % 2 != 0) {
            odds = odds + x;
        }
    }

    int operations = evens - odds;
    
    cout << "Evens added and odds subtracted we now have: " << operations << endl;
    return 0;
}
