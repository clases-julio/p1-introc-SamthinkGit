# include <iostream>
using namespace std;
/* ---------------------------- Exercise 8c - Practice 1 --------------------------------
  Author: Sebastian Mayorquin
  File: ejercicio8c.cpp
  Date: 30/09/2022
  Grade: Software Robotics (Software Design)

  Behaviour: Calculates irrational e^x with the accuracy of the result and x given
  by the user

  Notes:
  - Maximum decimal accuracy of 5 decimals
 --------------------------------------------------------------------------------------
*/

// --- [Function] fact() ---
// Usage: Integer n is accepted as an argument, then
// factorial of n is returned
double fact(int num){
    for (int i = num-1; i > 1; i--) {
        num *= i;
    }

    return num;
}

// --- [Function] pow() ---
// Usage: Integers num and exp are accepted as
// an argument, then num^exp is returned
double pow(int num, int exp){
    int result = num;
    for (int i = 0; i < exp-1; i++) {
        result *= num;
    }
    return result;
}

int main(){

    // ----- Declarations ------

    int accuracy, x;
    double result = 1;
    string input_check;

    // ----- Asking Parameters ------
    cout << "---------- Exercise 8c - Practice 1 ----------" << endl;
    cout << " Addend Accuracy: ";
    cin >> accuracy;

    // Check if there are more than 1 input
    getline(cin, input_check);

    cout << " X value: ";
    cin >> x;

    // Check again if more than 1 input
    if (input_check == "") getline(cin, input_check);

    // ----- Verifying ------

    // Failures
    if (!cin){
        cerr << "\n[FAILURE] ERRx001: Input is not a number. Expected integer";
        return 1;
    }

    // Warnings
    if (input_check != "") cout << " [WARNING] Wx001: Some entries will be lost" << endl;
    if (accuracy < 0) cout << " [WARNING] Wx002: Expected positive accuracy." << endl;
    if (accuracy > 15) cout << " [WARNING] Wx003: There could be errors for accuracy values higher than 15" << endl;

    // ----- Calculating ------
    int counter = 1;
    do{
        result += pow(x,counter)/fact(counter);
        counter++;
    } while(counter < accuracy);

    /* --------- [Suggest] -----------------
    "while" isn't the best performance,
    try changing it for the next expression:

    for (int i = 1; i <= accuracy; i++){
        result += pow(x,i)/fact(i);
    }
     ----------------------------------------*/

    // ----- Printing Result ------
    cout << " Constant e^" << x << ": " << result;

    return 0;
}

/* ----------------- Use Cases --------------------

   ----- Expected Behaviour (return 0)
 - Input: Integers (Positive)

    ----- Warnings (return 0)
 - (Wx001) Multiple Inputs
   [Undefined Use]: Behaviour not defined for more than
   1 input.

 - (Wx002) Negative accuracy
   [Undefined Use]: Behaviour not defined for negative
   accuracies

 - (Wx003) Too much accuracy
   [Wrong Use]: Accuracy > 15 tends to end in overflow.
   Results could not be valid.


   ----- Failures
 - (ERRx001) Input not valid
   [Wrong Use] Can't operate with not integer inputs

 ---------------------------------------------------*/