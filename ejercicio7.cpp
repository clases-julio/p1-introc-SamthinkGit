# include <iostream>
using namespace std;
/* ---------------------------- Exercise 7 - Practice 1 --------------------------------
  Author: Sebastian Mayorquin
  File: ejercicio7.cpp
  Date: 29/09/2022
  Grade: Software Robotics (Software Design)

  Behaviour: Requests N numbers, then prints them back separated by spaces
 --------------------------------------------------------------------------------------
*/

int main(){

    // ----- Declarations ------

    int AMOUNT = 5; // Amount of numbers for prompt
    string number;

    // ----- Asking Number ------

    cout << "---------- Exercise 7 - Practice 1 ----------\n";
    cout << "Write a " << AMOUNT << "-digit number: ";
    cin >> number;

    // ----- Verifying ------

    if (number.length() != AMOUNT)
        cout << "[WARNING] " << AMOUNT << "-digit number was expected\n";

    // ----- Printing Result ------

    cout << "Result: ";

    for (int i = 0; i < AMOUNT; i++)
        cout << number[i] << " ";

    return 0;
}
