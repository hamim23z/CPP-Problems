/* TODO: Write a function which takes a vector of integers V and 
an integer x and returns a boolean if x was found in elements of V.
*/

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;


bool returnsboolean(vector<int>& V, int x) {
    for (int i = 0; i<V.size(); i++) {
        if (V[i] == x) {
            return true;
        }
    }
    return false;
}


int main() {
    int x;
    vector<int> V = {1, 2, 3, 4, 5};


    cout << "Enter an integer: ";
    cin >> x;


    if (returnsboolean(V, x)) {
        cout << x << " is in the vector" << endl;
    } else {
        cout << x << " is not in the vector" << endl;
    }
    return 0;
}
