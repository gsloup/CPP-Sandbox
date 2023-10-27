#include <iostream>
#include <vector>
#include <string>

using namespace std;

//make sure this runs
//https://code.visualstudio.com/docs/cpp/config-clang-mac#_prerequisites

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}