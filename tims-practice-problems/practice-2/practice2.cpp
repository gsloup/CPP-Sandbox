#include <iostream>
#include <vector>
#include <string>

using namespace std;

// All about pointer basics
// https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/
// in short, compile variables are in the stack, run time allocations are on the heap
//
// & - Address of operator, * dereference value, ie what does this point at

int main()
{
    int value1;         // stored on stack
    int* value2;        // stored on stack points to an integer on heap   
    int value3[20];     // stored on stack, array of integers
    int* value4[20];    // stored on stack, array of pointers to ints on the heap
    int* value5;        // store on stack, pointer to an array on the heap

    value1 = 100;       // sets the value of value1 to 1
    value2 = &value1;   // set the value of value2 to the address of value1

    // show what the values are
    cout << "Value of value1: " << value1 << endl;
    cout << "Value of value2: " << value2 << endl; 
    cout << "Value of what value2 points at: " << *value2 << endl;

    // change what value2 is pointing at
    *value2 = 200;

    // show new values
    cout << "Value of value1: " << value1 << endl;
    cout << "Value of what value2 points at: " << *value2 << endl;
    cout << "Value of value2: " << value2 << endl; 
    
    // initilize the array on the stack
    for (int i = 0; i < 20; i++) 
    {
        value3[i] = (i) * 5;
    }

    // initilize the array of pointers
    for (int i = 0; i < 20; i++) 
    {
        value4[i] = new int;
        *value4[i] = (i+1) + 50;
    }

    for (int i = 0; i < 20; i++)
    {
        cout << "i: " << i << " address: " << value4[i] << " value: " << *value4[i] << endl;
    }

    // if you do a new you must do a delete on that object before it goes out of scope or you get a memory leak
    // there are better ways of doing this but this is the fundemental way

    for (int i = 0; i < 20; i++) 
    {
        delete value4[i];
    }

    // now we can use a pointer to an array, or an element in the array

    for (int i = 0; i < 20; i++) 
    {
        value5 = &value3[i];
        cout << "value = " << *value5 << endl;
    }
}