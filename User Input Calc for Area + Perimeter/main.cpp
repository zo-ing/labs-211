/* Ask the user to define the size of the array then provide
   height and width for the number of objects created by the
   arrray. Then print the area and perimeter.
*/

#include "Rectangle.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double width, height;
    int size;

    // Ask the user to provide the size of the array
    cout << "I output the perimeter and area of rectangles!\n";
    cout << "How many rectangles would you like to create?\n Please type an integer: ";
    cin >> size;

    // Create a new Rectangle object that takes the user-input size
    Rectangle *r = new Rectangle[size];

    // Ask user to provide height for objects
    for(int h = 0; h < size; h++){
        cout << "Please provide a height for Rectangle #" << h + 1 << " ";
        cin >> height;
        r[h].setHeight(height);
    }

    cout << endl;

    // Ask user to provide width for objects
    for(int w = 0; w < size; w++){
        cout << "Please provide a width for Rectangle #" << w + 1 << " ";
        cin >> width;
        r[w].setWidth(width);
    }

    cout << endl;
    
    // Print the perimeter and area
    cout << setw(10) << "Perimeter" << setw(8) << "Area\n";
    cout << "------------------\n";

    for(int total = 0; total < size; total++){
        cout << setw(10) << r[total].getPerimeter();
        cout << setw(8) << r[total].getArea() << endl;
    }

    delete [] r;    // Deletes dynamically allocated memory

    return 0;
}