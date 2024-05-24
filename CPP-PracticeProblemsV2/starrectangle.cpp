/*TODO: read two integers n, m and drawing a rectangle out of * characters that is nxm.
n is for the rows and m is for the columns. */

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
    int n;
    int m;
    //problem wants us to use these. n is for rows. m is for columns.

    cout << "How many rows do you want?: ";
    cin >> n;

    cout << "How many columns do you want?: ";
    cin >> m;
    //this is basic, just asking the user for their input


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
