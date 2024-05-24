#include <iostream>
#include <vector>

using namespace std;

// Function to merge two sorted vectors
vector<int> mergeSortedVectors(const vector<int>& vector1, const vector<int>& vector2) {
    vector<int> mergedVector;
    int i = 0;
    int j = 0;

    // Merge the two vectors
    while (i < vector1.size() && j < vector2.size()) {
        if (vector1[i] <= vector2[j]) {
            mergedVector.push_back(vector1[i]);
            i++;
        } else {
            mergedVector.push_back(vector2[j]);
            j++;
        }
    }
/*ABOVE CODE EXPLAINED:
    - so we make a function of type vector and its called mergesortedvectors. it has two parameters. vector1 and vector2
    it takes a constant reference to them. next since we want to return a vector, we make a new one called mergedvector. 
    int i and int j allows us to iterate thru the vectors. and simplifies the work for us. 

    - the while loop checks the size of vector1 and vector2 in comparison to i and j. if the size of 1 is <= size of 2, then
    we add eements from vector1 to merged. if not, then we add elements from vector2 to merged.
*/


    // Copy any remaining elements from vector1
    while (i < vector1.size()) {
        mergedVector.push_back(vector1[i]);
        i++;
    }

    // Copy any remaining elements from vector2
    while (j < vector2.size()) {
        mergedVector.push_back(vector2[j]);
        j++;
    }
    return mergedVector;
/*ABOVE CODE EXPLAINED: 
    - so if there are any remaining elements from vector1 or vector2 we add them. this usually happens and is best when there
    are repeated elements or even more elements in one vector than another. 
*/
}



int main() {
    vector<int> vector1 = {1, 1, 2, 3, 4};
    vector<int> vector2 = {5, 6, 7, 8, 12}; //declaring the vectors here

    vector<int> mergedVector = mergeSortedVectors(vector1, vector2); //calling the vectors here.

    for (int i = 0; i<mergedVector.size(); i++) {
        cout << mergedVector[i] << " "; 
    }
    return 0;
    //printing the new vector
}
