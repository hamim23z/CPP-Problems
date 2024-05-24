/* TODO: Write a function which takes a sorted vector of integers V
and an integer x and performs a binary search for x. The idea is that
since the vector is sorted, you can look at the middle element and 
then rule out half of the vector from the search. Keep on doing that 
until you find x or run out of places to look. 
*/

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

//this is the function
int binarySearch(vector<int> &sortedVec, int x) {
    int left = 0;
    int right = sortedVec.size() - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        // Check if x is present at mid
        if (sortedVec[middle] == x)
            return middle;

        // If x greater, ignore left half
        if (sortedVec[middle] < x)
            left = middle + 1;
        // If x is smaller, ignore right half
        else
            right = middle - 1;
    }

    // if we reach here, then element was not present
    return -1;
}


int main() {
    cout << "Enter the sorted vector of integers: ";
    vector<int> sortedVec;
    int num;
    while (cin >> num && num != -1) {
        sortedVec.push_back(num);
    }
    
    // Prompt user to enter the integer to search for
    int x;
    cout << "Enter the integer to search for: ";
    cin >> x;

    // Perform binary search
    int index = binarySearch(sortedVec, x);
    if (index != -1) {
        cout << "Element found at index " << index << endl;
    }
    return 0;
}
