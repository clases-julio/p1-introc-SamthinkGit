# include <iostream>
using namespace std;

/* ---------------------------- [Ex.Name] - [Exercises] --------------------------------
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

    // ----- Initializing ------
    cout << "---------- Exercise 5 - Practice 1 ----------\n";
    cout << " Radius: ";
    cin >> radius;

    // ----- Calculating -----
    cout << "\n---------- Calculating... ----------\n";

    // Diameter
    diameter = 2*radius;
    cout << "[Diameter = radius * 2]\n";
    cout << "Diameter = " << radius << " * 2 = " << diameter << endl;

    // Perimeter
    perimeter = pi*radius;
    cout << "[Perimeter = radius * pi]\n";
    cout << "Perimeter = " << radius << " * " << pi << " = " << perimeter << endl;

    // Area
    area = pi*radius*radius;
    cout << "[Area = pi * radius^2 ]\n";
    cout << "Area = 2 * " << radius << "^2 = " << area << endl;

    // ----- Results -----
    cout << "\n---------- Results ----------\n";
    cout << "Diameter: " << diameter << endl;
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;

    return 0;
}