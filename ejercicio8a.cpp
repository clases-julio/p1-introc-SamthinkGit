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
    string input_check;

    // ----- Asking Numbers ------
    cout << "---------- Exercise 8a - Practice 1 ----------\n";
    cout << " Write a non-negative number: ";
    cin >> num;

    // Check if there are more than 1 input
    getline(cin, input_check);


    // ----- Verifying Input ------

    // Failures
    if (!cin){
        cout << " [ERROR] ERRx001: Input is not an integer\n";
        return 1;
    }

    if (num < 0){
        cout << " [ERROR] ERRx002: Factorial of negative numbers aren't defined\n";
        return 2;
    }

    // Warnings
    if (input_check != "") cout << " [WARNING] Wx001: Some entries will be lost\n";

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

/* ----------------- Use Cases --------------------

   ----- Expected Behaviour (return 0)
 - Input: Integers (Positive)

    ----- Warnings (return 0)
 - (Wx001) Multiple Inputs
   [Undefined Use]: Behaviour not defined for more than
   1 input.


   ----- Failures
 - (ERRx001) Input is not an int
   [Wrong Use] Can't operate with not integer inputs

 - (ERRx002) Negative Input
   [Undefined Use] Can't resolve factorial of negative
   numbers

 ---------------------------------------------------*/