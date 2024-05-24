/* TODO: Write a function that takes a vector of integers V by reference
and reverses its contents. If V = 123, then after calling reverse(V), it
would contain 321.
*/

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

void reversevalues(vector<int>&vector1) //creating a void function called reversevalues and has a paramater of vector called vector1
{
    for (int i = 0; i < (vector1.size()) / 2; i++) {
        int temp = vector1[i];
        vector1[i] = vector1[(vector1.size()) - 1 - i];
        vector1[(vector1.size()) - 1 - i] = temp;
    }
}


int main()
{
    vector<int>V = {1, 2, 3};
    reversevalues(V);

    for (int i = 0; i<V.size(); i++) {
        cout << V[i] << endl;
    }
    return 0;
}
