/* TODO: Write a small program that prints an ASCII table. That is, it should print each character 
alongside its numeric representation. Also note that the printable range of ASCII values starts at 
32 and goes upto 126.*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    for (int i = 32; i <= 126; i++) {
        cout << "Character: " << static_cast<char>(i) << "\tASCII Value: " << i << "\n";
    }
    return 0;
}


/*
MY INTERPRETATION: Since we are given a range, of 32 to 126, the best choice is to use a for loop. 
We set i = 32 because that is where it starts and then go upto 126. And since we want to increase, we do i++.

When couting, we write the character and do a typecast because 32-126 is a number, we want the character, so 
we do a typecast and print the character. We then also print the number value of i
*/
