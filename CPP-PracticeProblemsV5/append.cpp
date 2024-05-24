/*TODO: write a function to append a new node with a given value to the 
end of a list. NOTE: the return value should be a pointer to the newly
allocated node. This will make it more fficient to contstuct a list by
appending over and over.
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;


struct node {
    int data;
    node* next;
};

node* append(node* L, int value)
{
    // Create a new node
    node* newNode = new node;
    newNode->data = value;
    newNode->next = nullptr;

    // If the list is empty, return the new node
    if (L == nullptr) {
        return newNode;
    }

    // Traverse the list to find the last node
    node* current = L;
    while (current->next != nullptr) {
        current = current->next;
    }

    // Attach the new node to the last node
    current->next = newNode;

    // Return the head of the list
    return L;
}

int main()
{
    // Example usage
    node* myList = nullptr;

    // Append some nodes to the list
    myList = append(myList, 10);
    myList = append(myList, 20);
    myList = append(myList, 30);

    // Print the list to verify
    node* current = myList;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    // Don't forget to free memory!
    current = myList;
    while (current != nullptr) {
        node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
