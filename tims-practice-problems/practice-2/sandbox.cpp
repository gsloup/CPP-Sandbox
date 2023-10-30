#include <iostream>
#include <vector>
#include <string>

using namespace std; // removes the need for the "std::"

int main() {
    string name; // stack

    name = "Fred";
    cout << "Stack: My name is " << name << ", what is yours?" << endl;
    
    string* hairColor; // Declare a pointer on the stack

    hairColor = new string("Brown"); // Allocate a string on the heap and assign the pointer

    cout << "Heap: My hair is " << *hairColor << ", what is yours?" << endl;
    cout << "Heap: This is the memory address of 'hairColor': " << hairColor << endl;

    delete hairColor; // Free the memory on the heap
}