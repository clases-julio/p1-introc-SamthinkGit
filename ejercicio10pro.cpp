# include <iostream>
using namespace std;
/* ---------------------------- Exercise 10 - Practice 1 --------------------------------
  Author: Sebastian Mayorquin
  File: ejercicio10.cpp
  Date: 30/09/2022
  Grade: Software Robotics (Software Design)

  Behaviour: Requests an scale,then prints an NxN rhombus using the character '*'

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

    for (int i = 0; i < spaces; i++) cout << " ";
    for (int i = 0; i < amount; i++) cout << "*";
    for (int i = 0; i < spaces; i++) cout << " ";

    cout << endl;

}

int main(){

    // ----- Declarations ------

    int size;

    // ----- Initializing ------
    cout << "---------- Exercise 10pro - Practice 1 ----------" << endl;
    cout << " Enter the desired scale (1-19): ";
    cin >> size;

    // ----- Verifying ------

    if (size > 19 || size < 1){
        cout << " [FAILURE] Scale inserted not valid";
        return 1;
    }
    if (size % 2 == 0) cout << " [WARNING] Even sizes could end in corrupted shapes" << endl;

    // ----- Drawing First half------
    for (int stars = 1; stars <= size; stars += 2){
        rhombus_line(stars,size);
    }

    // ----- Drawing Second Half ------
    for (int stars = size-2; stars >= 1; stars -= 2){
        rhombus_line(stars,size);
    }

    return 0;
}