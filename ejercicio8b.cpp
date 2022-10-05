# include <iostream>
using namespace std;
/* ---------------------------- Exercise 8b - Practice 1 --------------------------------
  Author: Sebastian Mayorquin
  File: ejercicio8b.cpp
  Date: 30/09/2022
  Grade: Software Robotics (Software Design)

  Behaviour: Calculates irrational e with the accuracy given by the user

  Notes:
  - Maximum accuracy of 5 decimals
 --------------------------------------------------------------------------------------
*/

// --- [Function] fact() ---
// Usage: Integer n is accepted from the input, then
// factorial of n is returned
float fact(int num){
    for (int i = num-1; i > 1; i--) {
        num *= i;
    }

    return num;
}

int main(){

    // ----- Declarations ------

    int accuracy;
    float result = 1;
    string input_check;

    // ----- Asking Accuracy ------
    cout << "---------- Exercise 8b - Practice 1 ----------" << endl;
    cout << " Addend Accuracy: ";
    cin >> accuracy;

    // Check if there are more than 1 input
    getline(cin, input_check);

    // ----- Verifying ------

    // Failures
    if (!cin){
        cerr << "\n[FAILURE] ERRx001: Input is not a number. Expected integer";
        return 1;
    }

    if (accuracy < 0) {
        cout << " [FAILURE] ERRx002: Expected positive number." << endl;
        return 1;
    }

    // Warnings
    if (input_check != "") cout << " [WARNING] Wx001: Some entries will be lost\n";
    if (accuracy > 15) cout << " [WARNING] Wx002: Result could be overflowed\n";

    // ----- Calculating ------
    int counter = 1;
    do{
        result += 1/fact(counter);
        counter++;
    } while(counter < accuracy);

    /* --------- [Suggest] -----------------
    "while" isn't the best performance,
    try changing it for the next expression:

    for (int i = 1; i <= accuracy; i++){
        result += 1/fact(i);
    }
     ----------------------------------------*/

    // ----- Printing Result ------
    cout << " Constant e: " << result;

    return 0;
}

/* ----------------- Use Cases --------------------

   ----- Expected Behaviour (return 0)
 - Input: Integers (Positive)

    ----- Warnings (return 0)
 - (Wx001) Multiple Inputs
   [Undefined Use]: Behaviour not defined for more than
   1 input.

 - (Wx002) Too much accuracy
   [Wrong Use]: Accuracy > 15 tends to end in overflow.
   Results could not be valid.


   ----- Failures
 - (ERRx001) Input is not an int
   [Wrong Use] Can't operate with not integer inputs

 - (ERRx002) Negative Input
   [Undefined Use] Can't resolve factorial of negative
   numbers

 ---------------------------------------------------*/