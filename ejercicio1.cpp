# include <iostream>
using namespace std;

/* ---------------------------- Exercise 1 - Practice 1 --------------------------------
  Author: Sebastian Mayorquin
  File: ejercicio1.cpp
  Date: 28/09/2022
  Grade: Software Robotics (Software Design)
º
  Behaviour: Prompts 2 diferent numbers. Then their sum, product, difference and quotient
  are printed

  Notes:
  - This is the Note A
  - This is the Note B
 --------------------------------------------------------------------------------------
*/

int main() {

    // ----- Declarations ------

    float first_number, second_number;

    // ----- Taking Numbers ------

    cout << "---------- Exercise 1 - Practice 1 ----------\n";
    cout << " Number 1: "   ;
    cin >> first_number;
    cout << " Number 2: ";
    cin >> second_number;

    // ----- Calculating... ------
    cout << "---- Solutions -----\n";

    if (second_number == 0)
        cout << "[WARNING] Dividing by 0 is not defined\n";

    cout << " Sum: " << first_number+second_number << endl;
    cout << " Multiplication: " << first_number*second_number << endl;
    cout << " Difference: " << first_number-second_number << endl;
    cout << " Quotient: " << first_number/second_number;

    return 0;
}