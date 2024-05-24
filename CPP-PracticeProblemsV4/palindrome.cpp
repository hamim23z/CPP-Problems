/*TODO: write a function that takes a string and returns a boolean indicating whether or not the string was a palindrome. 
Palindromes are strings that do not change when reversed.
*/

#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;


bool checkpalindrome(string &text, int start, int end) {
  if (start >= end) {
    return true;
  }

  if (text[start] != text[end]) {
    return false;
  }
  return checkpalindrome(text, start + 1, end - 1);
}




int main() {
  string text; 

  cout << "Input a string: ";
  getline(cin, text); 
  bool palindrome = checkpalindrome(text, 0, text.length() - 1); 


  if (palindrome)
    cout << 1 << endl;
  else
    cout << 0 << endl;
    return 0;
}
