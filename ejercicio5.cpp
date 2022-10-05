# include <iostream>
using namespace std;

/* ---------------------------- Exercise 5 - Practice 1 --------------------------------
  Author: Sebastian Mayorquin
  File: ejercicio5.cpp
  Date: 29/09/2022
  Grade: Software Robotics (Software Design)

  Behaviour: Estimates the diameter, perimeter and area of the circumference by giving
  its radius
 --------------------------------------------------------------------------------------
*/

int main(){

    // ----- Declarations ------

    float pi = 3.14159;
    float radius, diameter, perimeter, area;
    string input_check;

    // ----- Initializing ------
    cout << "---------- Exercise 5 - Practice 1 ----------\n";
    cout << " Radius: ";
    cin >> radius;

    // Check if there are more than 1 input
    getline(cin, input_check);

    // ----- Verifying input -----

    // Failures
    if (!cin){
        cerr << "\n [FAILURE] ERRx001: Input is not a number.";
        return 1;
    }

    if (radius < 0){
        cerr << "\n [FAILURE] ERRx002: Input can't be negative.";
        return 2;
    }

    // Warnings
    if (input_check != "") cout << "[WARNING] Wx001: Some entries will be lost\n";


    // ----- Calculating -----
    cout << "\n---------- Calculating... ----------\n";

    // Diameter
    diameter = 2*radius;
    cout << " [Diameter = radius * 2]\n";
    cout << " Diameter = " << radius << " * 2 = " << diameter << endl;

    // Perimeter
    perimeter = pi*radius;
    cout << " [Perimeter = radius * pi]\n";
    cout << " Perimeter = " << radius << " * " << pi << " = " << perimeter << endl;

    // Area
    area = pi*radius*radius;
    cout << " [Area = pi * radius^2 ]\n";
    cout << " Area = 2 * " << radius << "^2 = " << area << endl;

    // ----- Results -----
    cout << "\n---------- Results ----------\n";
    cout << " Diameter: " << diameter << endl;
    cout << " Perimeter: " << perimeter << endl;
    cout << " Area: " << area << endl;

    return 0;
}

/* ----------------- Use Cases --------------------

   ----- Expected Behaviour (return 0)
 - Input: Float

   ----- Warnings (return 0)
 - (Wx001) Multiple inputs per request
   [Wrong Use] Some entries will be lost, the program
   only accepts one number per request

   ----- Failures
 - (ERRx001) Input is not a number
   [Wrong Use] Can't operate with strings

 - (ERRx002) Input is negative
   [Undefined Use] Calculations not defined for negative
   numbers
 ---------------------------------------------------*/