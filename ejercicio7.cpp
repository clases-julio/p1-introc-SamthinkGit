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

    // Warnings
    if (number.length() != AMOUNT)
        cout << "[WARNING] Wx001: " << AMOUNT << "-digit number was expected\n";

    // ----- Printing Result ------

    cout << "Result: ";

    for (int i = 0; i < AMOUNT; i++)
        cout << number[i] << " ";

    return 0;
}

/* ----------------- Use Cases --------------------

   ----- Expected Behaviour (return 0)
 - Input: Integers

   ----- Warnings (return 0)
 - (Wx001) More inputs than requested
   [Wrong Use] Some entries will be lost, the program
   only accepts first AMOUNT inputs, others will be discarded

 ---------------------------------------------------*/