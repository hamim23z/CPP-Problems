/* TODO: Write a function called pop_front which will remove the first
element of a vector. So insteaf of calling V.pop_front(), you would do
pop_front(V). Use the function header wes gave. CANNOT USE ANY EXTERNAL
LIBRARY FUNCTIONS
*/

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;


void popfront(vector<int> &vector1) { 
    if (vector1.size() > 0) {
        for (size_t i = 1; i < vector1.size(); ++i) {
            vector1[i - 1] = vector1[i];
        }
        vector1.pop_back();
    }
}

int main() {
    vector<int> V = {1, 2, 3, 4, 5};
    popfront(V);
    
    for (int i = 0; i < V.size(); i++) {
        cout << V[i] << endl;
    }
    return 0;
}
