/* TODO: Write a function which takes a vector of integers V and an integer d
and returns another vector containing only the elements of V which are divisible
by d. 
*/

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

vector<int> divisible(vector<int>vector1, int d) /*i made a fcuntion of type vector and it is called divisible. 
                                                   and it takes two parameters called vector1 and int d*/ 
{
    vector<int> finalresult; /*since i want to return another vector, made one called finalresult*/
    for (int i = 0; i < vector1.size(); i++) {
        if (vector1[i] % d == 0) {
            finalresult.push_back(vector1[i]);
        }
    }
    return finalresult;
}
/*so the for loop iterates thru vector1, thats the numbers the user is entering. 
and the if statement is basically what the question is asking. if a number in the
vector1 is divisible by d, then i add that to finalresult. i can add that to
the vector finalresult by using push back*/


int main() {
    int d;
    cout << "Enter the integer you want to divide by: " << endl;
    cin >> d;
    /*int d, asks user for the value of d*/


    cout << "Enter the integers: " << endl;
    vector<int> vector1;
    /*asking for integers and then "calling" the vector*/


    int x;
    while (cin >> x) {
        vector1.push_back(x);
    }
    /*since i cant really call a vector, i make a variable
    called x. int x. it is what the user is inputting and
    then i store that into vector1 by push back*/


    vector<int>finalresult = divisible(vector1, d); //here i am calling the function called divisible

    cout << "Elements of the vector divisible by " << d << ": ";
    for (int i = 0; i < finalresult.size(); i++) {
        cout << finalresult[i] << endl;
    }
    return 0;
    /*now for the for loop above, im iterating thru the finalresult
    vector so i can actually print out the values.*/
}
