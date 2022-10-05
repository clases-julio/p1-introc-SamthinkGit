# include <iostream>
using namespace std;

/* ---------------------------- Exercise 3 - Practice 1 --------------------------------
  Author: Sebastian Mayorquin
  File: ejercicio3.cpp
  Date: 28/09/2022
  Grade: Software Robotics (Software Design)

  Behaviour: Requests 2 different numbers. They will be compared and the biggest one
  will be printed

  Notes:
  - Results contains accents (´), terminal could not
  accept this characters.
  -------------------------------------------------------------------------------------
*/

int main(){

    // ----- Declarations ------

    int first_number, second_number;
    string input_check;

    // ----- Taking Numbers ------
    cout << "---------- Exercise 3 - Practice 1 ----------\n";
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
        cerr << "\n[FAILURE] ERRx001: Input is not an integer.";
        return 1;
    }

    // Warnings
    if (first_number == second_number) cout << " [WARNING] Wx001: Number 1 and Number 2 are equal\n";
    if (input_check != "") cout << " [WARNING] Wx002: Some entries will be lost\n";

    // ----- Comparing ------
    cout << "---- Solution ------\n";

    if(first_number > second_number)
        cout << first_number << " es más grande.";
    else if(first_number < second_number)
        cout << second_number << " es más grande.";
    else
        cout << "Estos números son iguales.";

    return 0;

}
/* ----------------- Use Cases --------------------

   ----- Expected Behaviour (return 0)
 - Input: Integers

   ----- Warnings (return 0)
 - (Wx001) Inputs are equal
   [Unexpected Situation]: There is not a higher or
   lower number.

 - (Wx002) Multiple inputs per request
   [Wrong Use] Some entries will be lost, the program
   only accepts one number per request

   ----- Failures
 - (ERRx001) Input is not an int
   [Wrong Use] Can't operate with not integer inputs

 ---------------------------------------------------*/