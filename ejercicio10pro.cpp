# include <iostream>
using namespace std;
/* ---------------------------- Exercise 10 - Practice 1 --------------------------------
  Author: Sebastian Mayorquin
  File: ejercicio10.cpp
  Date: 30/09/2022
  Grade: Software Robotics (Software Design)

  Behaviour: Requests a scale,then prints an NxN rhombus using the character '*'

  Notes:
  - Constant size (scale) determines de NxN size
  - Size only accepts odd numbers between 1 and 19
 --------------------------------------------------------------------------------------
*/

/* ------------------------- [Nota para el corrector] ------------------------------
 * En un principio consideré más adecuado tomar el tamaño del rombo como
 * una constante modificable sin conocer que era el funcionamiento del
 * ejercicio10pro.cpp. Así pues, la implementación sera en base la misma
 * para ambos programas. (Entendiendo esta implementación como la mas
 * eficiente)
 *
 *--------------------------------------------------------------------------------*/

inline
// --- [Function] rhombus_line() ---
// Usage: Prints a line of the rhombus knowing
// its size and the width in that line
void rhombus_line(int amount, int SIZE){

    int spaces = (SIZE - amount)/2;

    for (int i = 0; i < spaces; i++) cout << ' ';
    for (int i = 0; i < amount; i++) cout << '*';
    for (int i = 0; i < spaces; i++) cout << ' ';

    cout << endl;

}

int main(){

    // ----- Declarations ------

    int size;
    int MAX = 19; // Maximum size
    int MIN = 1;  // Minimum size
    string input_check;

    // ----- Initializing ------
    cout << "---------- Exercise 10pro - Practice 1 ----------" << endl;
    cout << " Enter the desired scale (1-19): ";
    cin >> size;

    // Check if more than 1 input
    if (input_check == "") getline(cin, input_check);


    // ----- Verifying ------

    //Failures
    if (!cin){
        cerr << "\n [FAILURE] ERRx001: Input is not a number. Expected integer or float";
        return 1;
    }

    if (size > MAX || size < MIN){
        cout << " [FAILURE] ERRx002: Scale inserted not valid";
        return 1;
    }

    // Warnings
    if (size % 2 == 0) cout << " [WARNING] Wx001: Even sizes could end in corrupted shapes" << endl;
    if (input_check != "") cout << " [WARNING] Wx002: Some entries will be lost" << endl;

    // ----- Drawing First half ------
    for (int stars = 1; stars <= size; stars += 2){
        rhombus_line(stars,size);
    }

    // ----- Drawing Second half ------
    for (int stars = size-2; stars >= 1; stars -= 2){
        rhombus_line(stars,size);
    }

    return 0;
}

/* ----------------- Use Cases --------------------

   ----- Expected Behaviour (return 0)
 - Input: Integers (Positive)

    ----- Warnings (return 0)
 - (Wx001) Even size
   [Wrong Use]: Shapes with odd sizes can't be
   correctly drawn

 - (Wx002) More than 1 input
   [Undefined Use]: Behaviour not defined for more
   than 1 input


   ----- Failures
  - (ERRx001) Input is not an int
   [Wrong Use] Can't operate with not integer inputs

  - (ERRx002) Scale not valid
   [Wrong Use] Only sizes between MAX and MIN are
   accepted

 ---------------------------------------------------*/