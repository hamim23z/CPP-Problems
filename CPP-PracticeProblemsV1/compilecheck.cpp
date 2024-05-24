/*TODO: Make sure you can compile this and run it*/

#include <iostream>
using std::cin;
using std::cout;
#include <string.h> /*We need to use this if we want to use strings or any functions that include strings. 
Some of the most common are size_t and strlen. Can also use cstring but NOT just string*/

int main()
{
    const char* s = "pbatenghyngvbaf ba pbzcyrgvat gur svefg rkrepvfr!";
    size_t n = strlen(s);
    for (size_t i = 0; i < 49; i++) 
        cout << (char)(('a' <= s[i] && s[i] <= 'z') ? ((s[i] - 'a' + 13) % 26 + 'a'):s[i]);
        cout << "\n";
        return 0;
}
