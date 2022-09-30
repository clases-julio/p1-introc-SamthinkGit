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

    // ----- Asking Parameters ------
    cout << "---------- Exercise 8c - Practice 1 ----------" << endl;
    cout << " Addend Accuracy: ";
    cin >> accuracy;
    cout << " X value: ";
    cin >> x;

    // ----- Verifying ------
    if (accuracy < 0)
        cout << " [WARNING] Expected positive accuracy." << endl;
    if (accuracy > 15)
        cout << " [WARNING] There could be errors for accuracy values higher than 15" << endl;

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