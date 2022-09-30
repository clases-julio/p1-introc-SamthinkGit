# include <iostream>
using namespace std;
/* ---------------------------- [Ex.Name] - [Exercises] --------------------------------
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

    // ----- Asking Accuracy ------
    cout << "---------- Exercise 8b - Practice 1 ----------" << endl;
    cout << " Addend Accuracy: ";
    cin >> accuracy;

    // ----- Verifying ------
    if (accuracy < 0)
        cout << " [WARNING] Expected positive number." << endl;

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