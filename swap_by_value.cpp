#include <iostream>
using namespace std;

// FUNCTION: swapByValue
//Purpose: Attempts to swap two integers
//Parameters: a and b (passed by value - copies are made)
//Returns: void
void swapByValue(int &a, int &b) {
    //display the values of a and b before swapping
    cout << "Inside function - Before swap : a = " << a <<", b = "<< b << endl;

    //declare a temporary variable to hold the value of a
    int temp = a;
    //assign the value of b to a
    a = b;
    //assign the value of temp (original a) to b
    b = temp;

    //display the values of a and b after swapping
    cout << "Inside function - After swap : a = " << a <<", b = " << b << endl;

}

int main() {
    // declare two integer variables
    int x = 10;
    int y = 20;

    //display the values before calling the function
    cout << "Before calling swapByValue: " <<endl;
    cout << "x = " << x <<" , y = " << y << endl;

    //call the function, passing x and y by value
    //copies of x and y are sent to the function
    swapByValue(x, y);

    //display the values after calling the function
    cout << "After calling swapByValue: " <<endl;
    cout << "x = " << x <<" , y = " << y << endl;
    
    //explain why the values did not change
    cout << "\nExplanation: The function receives COPIES of x and y." <<endl;
    cout << "Changes made inside the function do not affect the originals." <<endl;

    return 0;
}