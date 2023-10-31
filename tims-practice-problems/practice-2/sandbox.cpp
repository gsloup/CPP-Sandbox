#include <iostream>
#include <vector>
#include <string>

using namespace std; // removes the need for the "std::"

int main() {
    string name; // stack

    name = "Fred";
    cout << "Stack: My name is " << name << ", what is yours?" << endl;
    
    string* hairColor; // Declare a pointer on the stack

    /*-------------------------------------------------------------------*/

    hairColor = new string("Brown"); // Allocate a string on the heap and assign the pointer

    cout << "Heap: My hair is " << *hairColor << ", what is yours?" << endl;
    cout << "Heap: This is the memory address of 'hairColor': " << hairColor << endl;

    delete hairColor; // Free the memory on the heap

    /*-------------------------------------------------------------------*/

    int age1; // stack
    int* age2; // stored on stack, points to an int on heap

    age1 = 18;

    age2 = &age1; // assigns age2 to the address of age1

    cout << "The stack age is " << age1 << endl;
    cout << "The heap pointed age is " << *age2 << endl; // value of age2

    *age2 = 21;

    cout << "If I change the value of '*age2', it will affect 'age1' since it points to the same address in memory." << endl;
    cout << "'*age2'= " << *age2 << " and 'age1'= " << age1 << endl;

    /*-------------------------------------------------------------------*/

}