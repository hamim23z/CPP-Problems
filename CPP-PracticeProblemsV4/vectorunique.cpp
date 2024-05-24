/*TODO: Write a function which takes a sorted vectors of integers V. And returns the vector of the unique elements of V. For example, if V = {1, 2, 2, 3, 3, 4} the resulting vector should be {1, 2, 3, 4} */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;

/*Program states to make a function that takes a sorted vector of integers and then returns them. That is why I made a vector function of type int. That is also why I made the vector return something because it is supposed to return the unique elements*/
vector<int> getUniqueElements(const vector<int>& V1) {
    vector<int> uniqueElements; //empty vector to store results
    if (V1.empty()) {
        return uniqueElements; 
    } // if the vector the is empty, it wont return anything sorted, just the empty vector itself again
    
    /*The code below is iterating through the getUniqueElements and is putting it into the Unique Elements by using the push back. The for loop is to also iterate. The if statement checks if any of the elements in an index are equal to another, thats why we have !=. */
    uniqueElements.push_back(V1[0]);
    for (size_t i = 1; i < V1.size(); ++i) {
        if (V1[i] != V1[i - 1]) {
            uniqueElements.push_back(V1[i]); //If the current element is different from the previous one its added to unique.
        }
    }
    return uniqueElements;
}



int main() {
    vector<int> V1; //declaring the vector here
    int num; //making new integer num
    cout << "Enter sorted integers: " << "\n"; //telling user to input
    while (cin >> num) {
        V1.push_back(num);
    }

    vector<int> uniqueV1 = getUniqueElements(V1); //calling the function here as the problem tells us too

    cout << "Unique elements: " << "\n";
    for (size_t i = 0; i < uniqueV1.size(); ++i) {
        cout << uniqueV1[i] << " ";
    }
    cout << endl;
    return 0;
}
