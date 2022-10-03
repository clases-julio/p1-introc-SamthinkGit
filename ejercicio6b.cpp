# include <iostream>
using namespace std;

/* ---------------------------- Exercise 6b - Practice 1 --------------------------------
  Author: Sebastian Mayorquin
  File: ejercicio6b.cpp
  Date: 29/09/2022
  Grade: Software Robotics (Software Design)

  Behaviour: Prints a NxN chess board

  Notes:
  - Constant SIZE determines the number of rows-columns
  - Only even numbers are accepted as sizes
  --------------------------------------------------------------------------------------
*/

int main() {

    // ----- Declarations ------

    int SIZE = 8;

    // ----- Printing ------
    for (int i = 0; i < SIZE/2; i++){

        //Draw a row
        for (int j = 0; j < SIZE; j++) cout << "* ";
        cout << endl;

        //Draw a row with offset
        for (int j = 0; j < SIZE; j++) cout << " *";
        cout << endl;
    }
}