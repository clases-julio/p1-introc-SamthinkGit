# include <iostream>
using namespace std;

/* ---------------------------- Exercise 1 - Practice 1 --------------------------------
  Author: Sebastian Mayorquin
  File: ejercicio1.cpp
  Date: 28/09/2022
  Grade: Software Robotics (Software Design)
º
  Behaviour: Requests 2 different numbers. Then their sum, product, difference and quotient
  are printed.

 --------------------------------------------------------------------------------------
*/


int main() {

    // ----- Declarations ------

    float first_number, second_number;
    string input_check;

    // ----- Taking Numbers ------
    cout << "---------- Exercise 1 - Practice 1 ----------\n";
    cout << " Number 1: ";
    cin >> first_number;

    // Check if there are more than 1 input
    getline(cin, input_check);

    cout << " Number 2: ";
    cin >> second_number;

    // Check again if more than 1 input
    if (input_check == "") getline(cin, input_check);

    // ----- Verifying input -----

    // Failures
    if (!cin){
        cerr << "\n[FAILURE] ERRx001: Input is not a number. Expected integer or float";
        return 1;
    }

    // Warnings
    if (second_number == 0) cout << " [WARNING] Wx001: Dividing by 0 is not defined\n";
    if (input_check != "") cout << " [WARNING] Wx002: Some entries will be lost\n";


    // ----- Calculating... ------
    cout << "---- Solutions -----\n";

    cout << " Sum: " << first_number+second_number << endl;
    cout << " Multiplication: " << first_number*second_number << endl;
    cout << " Difference: " << first_number-second_number << endl;
    cout << " Quotient: " << first_number/second_number;

    return 0;
}

/* ----------------- Use Cases --------------------

   ----- Expected Behaviour (return 0)
 - Input: Integers
 - Input: Floats

   ----- Warnings (return 0)
 - (Wx001) '0' as second number
   [Undefined Use]: Dividing by 0 is not defined

 - (Wx002) Multiple inputs per request
   [Wrong Use] Some entries will be lost, the program
   only accepts one number per request

   ----- Failures
 - (ERRx001) Input is not a number
   [Wrong Use] Can't operate with not numeric strings

 ---------------------------------------------------*/
