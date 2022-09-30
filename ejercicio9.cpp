# include <iostream>
using namespace std;
/* ---------------------------- Exercise 9 - Practice 1 --------------------------------
  Author: Sebastian Mayorquin
  File: ejercicio9.cpp
  Date: 30/09/22
  Grade: Software Robotics (Software Design)

  Behaviour: Calculates an array of pi approximations using Leibniz Equation
 --------------------------------------------------------------------------------------
*/

int main(){

    // ----- Declarations ------

    float aprox = 0; // pi approximation
    float divisor = 1; // coefficient denominator
    float sign = 1;    // sign of coefficient

    // ----- Initializing ------
    cout << "---------- Exercise 9 - Practice 1 ----------" << endl;

    // ----- Calculating Aproximations ------

    for(int row = 0; row < 1000; row += 10){

        // Printing row identifier
        cout << "Row " << row+1 << "-" << row + 10 << ":\t";

        // Printing 10 approximations (accumulative)
        for (int column = 0; column < 10; column++){
            aprox += sign*4/divisor;
            sign *= -1;
            divisor += 2;
            cout << aprox << "\t";
        }

        cout << endl;
    }

    return 0;
}
