# include <iostream>
using namespace std;

/* ---------------------------- Exercise 3 - Practice 1 --------------------------------
  Author: Sebastian Mayorquin
  File: ejercicio3.cpp
  Date: 28/09/2022
  Grade: Software Robotics (Software Design)

  Behaviour: Prompts 2 different numbers. They will be compared and the biggest one
  will be printed

  Notes:
  - Results contains accents (´), terminal could not
  accept this characters.
  -------------------------------------------------------------------------------------
*/

int main(){

    // ----- Declarations ------

    float first_number, second_number;

    // ----- Taking Numbers ------

    cout << "---------- Exercise 3 - Practice 1 ----------\n";
    cout << " Number 1: "   ;
    cin >> first_number;
    cout << " Number 2: ";
    cin >> second_number;

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
