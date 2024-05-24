/*TODO: Write a function that takes two integer parameters and swaps their contents.
IF x = 0, y = 1. then after the swap, x = 1, y = 0.*/

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;


void swapfunction(int &x, int &y) {
    int tempvariable = x;
    x = y;
    y = tempvariable;
}


int main()
{
    int x;
    int y;

    cout << "Enter two integers only: ";
    cin >> x >> y;


    cout << "The two integers that you entered were: " << x << " and " << y << endl;
    swapfunction(x,y);
    cout << "After swapping it, their values are now: " << x << " and " << y << endl;

}
