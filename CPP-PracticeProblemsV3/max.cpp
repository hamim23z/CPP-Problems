/*TODO: Write a function that takes three integer parameters and returns the largest one*/

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int functionlarge(int x, int y, int z) {
    if (x > y && x > z) {
        return x;
    } else if (y > x && y > z) {
        return y;
    } else {
        return z;
    }
}


int main()
{
    int x;
    int y;
    int z;

    cout << "Enter three integers only: ";
    cin >> x >> y >> z;

    cout << "The largest number out of these three is: " << functionlarge(x, y, z) << endl;
}
