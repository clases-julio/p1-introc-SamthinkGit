# include <iostream>
using namespace std;

/* ---------------------------- Exercise 4 - Practice 1 --------------------------------
  Author: Sebastian Mayorquin
  File: ejercicio4.cpp
  Date: 28/09/2022
  Grade: Software Robotics (Software Design)

  Behaviour: Requests 3 numbers. Their sum, average and product will be printed as well as
  the smaller and bigger numbers.

  Notes:
  - Numbers must be separated by spaces

  -------------------------------------------------------------------------------------
*/

int main(){
    // ----- Declarations ------
    int num0, num1, num2;  // Numbers
    int sum;               // Sum of numbers

    // ----- Asking Numbers ------
    cout << "Introduzca tres enteros distintos: ";
    cin >> num0 >> num1 >> num2 ;

    // ----- Printing Simple Solutions -----
    sum = num0 + num1 + num2;

    cout << "La suma es " << sum << endl;
    cout << "El promedio es " << sum/3 << endl;
    cout << "El producto es " << num0 * num1 * num2 << endl;

    //  ------ Finding biggest and smallest numbers -----

    int max, min; // Maximum and minimum variables

    // Finding potential max and min
    if (num0 < num1) {
        max = num1;
        min = num0;
    }else{
        max = num0;
        min = num1;
    }

    // Comparing minimums
    if (min < num2){
        cout << "El menor es " << min << endl;
    }else{
        cout << "El menor es " << num2 << endl;
    }

    // Comparing maximums
    if (max > num2){
        cout << "El mayor es " << max << endl;
    }else{
        cout << "El mayor es " << num2 << endl;
    }

    return 0;
}