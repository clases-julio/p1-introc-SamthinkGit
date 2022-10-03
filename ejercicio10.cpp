# include <iostream>
using namespace std;
/* ---------------------------- Exercise 10 - Practice 1 --------------------------------
  Author: Sebastian Mayorquin
  File: ejercicio10.cpp
  Date: 30/09/2022
  Grade: Software Robotics (Software Design)

  Behaviour: Prints an NxN rhombus using the character '*'

  Notes:
  - Constant SIZE determines de NxN size
  - Size only accepts odd numbers
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

    int SIZE = 9;

    // ----- Initializing ------
    cout << "---------- Exercise 10 - Practice 1 ----------" << endl;

    // ----- Verifying ------ (Uncomment if modify SIZE constant)
    // if (SIZE % 2 == 0) cout << " [WARNING] Even sizes could end in corrupted shapes" << endl;

    // ----- Drawing First half ------
    for (int stars = 1; stars <= SIZE; stars += 2){
        rhombus_line(stars,SIZE);
    }

    // ----- Drawing Second half ------
    for (int stars = SIZE-2; stars >= 1; stars -= 2){
        rhombus_line(stars,SIZE);
    }

    return 0;
}
