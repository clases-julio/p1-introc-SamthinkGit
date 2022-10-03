# include <iostream>
using namespace std;
/* ---------------------------- Exercise 8a - Practice 1 --------------------------------
  Author: Sebastian Mayorquin
  File: ejercicio8a.cpp
  Date: 30/09/2022
  Grade: Software Robotics (Software Design)

  Behaviour: Requests for a non-negative number, then prints its factorial
 --------------------------------------------------------------------------------------
*/

int main(){

    // ----- Declarations ------

    int num;
    int result;

    // ----- Asking Numbers ------
    cout << "---------- Exercise 8a - Practice 1 ----------\n";
    cout << " Write a non-negative number: ";
    cin >> num;

    // ----- Verifying Input ------
    if (num < 0){
        cout << " [ERROR] Factorial of negative numbers isn't defined\n";
        return 1;
    }

    // Factorial of 0 = 1
    if (num == 0) num = 1;

    // ----- Calculating ------
    result = num;
    while (result > 1) {
        result--;
        num = num * result;
    }

    // ----- Printing Result ------
    cout << " Factorial: " << num;

    return 0;
}
