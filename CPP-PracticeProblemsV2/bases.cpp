/*TODO: Write a program that reads an integer, say b < 10, and another integer n. And then prints out a string that 
represents the integer n in base b. Example, if b = 7 and n = 94, your program would output digits 163 because 94 = 1*49 + 6*7 + 3*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int base; //question asks for base
    int usernumber; //this is the number user is inputting

    cout << "Enter the base (b<10): ";
    cin >> base;

    if (base >= 10) {
        cout << "The base must be less than 10.";
        return 0;
    } 
    cout << "Enter the number you would like to convert: ";
    cin >> usernumber;


    string finalanswer; //we will cout this because we want a string as an answer
    if (usernumber == 0) {
        cout << "This number cannot be converted. " << endl; 
        return 0; //the number 0 cannot be converted so itll also end program 
    } else {
        while (usernumber > 0) {
            finalanswer = static_cast<char>('0' + (usernumber % base)) + finalanswer; 
            usernumber = usernumber / base; //this is what i said above, (number/base)
        }
    }
    
    cout << "The number converted with the base provided is: " << finalanswer << endl;
    return 0;
}


/*since we want a string as an answer and we have all integers, I use static cast to convert the integers to a character. 
this process is sort of like repeated division. so i divided the number by base (number/base) and then added it to the ascii 
value 0 and then added it again then it goes to the front*/

/*94 / 7 is 13 remainder 3. so what this does is since we have ascii value 0, that corresponds to 48. 48+3 = 51 and 51 corresponds
to 3. and 63. then we have 363 according to ascii table. and to get 163, thats why i add final answer again/*/
