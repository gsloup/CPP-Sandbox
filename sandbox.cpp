#include <iostream> // useful for the 'cout' and 'endl' 

// int main() {
//     /*
//     Standard Command Output
//         the << is the output stream insertion
//         "endl" ends the line (akin to "\n")
//     */
//     std::cout << "Hello World" << std::endl;
//     std::cout << "Happy Day" << "\n"; // same line break as above. A bit more efficient, but unlike 'endl' it doesn't flush the output buffer
//     std::cout << "Goodbye!";
//     return 0;
// }

// --------------------------------------------------------------

// int main() {
    
//     int x; // declaration
//     x = 5; // assignment
//     int y = 6;
//     int sum = x + y;

//     std::cout << x << '\n';
//     std::cout << y << '\n';
//     std::cout << sum << '\n';


//     return 0;
// }

// --------------------------------------------------------------

// int main(){
//     // integer 
//     int age = 21;
//     int year = 2023;
//     int days = 7.5; // will truncate to 7

//     // double (number including decimal)
//     double price = 10.99;
//     double gpa = 2.5;
//     double temperature = 25.1;

//     // single character
//     char grade = 'A';
//     char initial = 'B';
//     // char initial2 = 'BC'; // causes problems, and would only display 'C'
//     char currency = '$';

//     // boolean
//     bool student = true;
//     bool power = false;
//     bool forSale = true;

//     // string (objects that represents a squence of text)
//     std::string name = "Jake";
//     std::string address = "123 Fake St.";

//     std::cout << "Hello " << name;
//     std::cout << "You are " << age << " years old";

//     return 0;
// }

// --------------------------------------------------------------

// int main() {

//     // constants
//     const double PI = 3.14159; // const nomenclature: ALL CAPS
//     double radius = 10;
//     double circumference = 2 * PI * radius;
//     const int LIGHT_SPEEED = 299792458;

//     std::cout << circumference << "cm";

//     return 0;
// }

// --------------------------------------------------------------
    /*
    Namespaces
        - Provides a soln for preventing name conflicts in large projects.
        - Each entity needs a unique name.
        - A namespace allows for identically named entities, so long as the 
            namespaces are different
    */
// namespace first{
//     int x = 1;

// }
// namespace second{
//     int x = 2;
// }

// int main(){

//     int x = 0;
//     // int x = 1; // breaks things

//     // if you don't explicity state which namespace you are using, 
//     //      you'll use the local version of an entity (x inside main func)
//     // std::cout << x;

//     // if you want to ref a specific namespace, use namespace name and 
//     //      the scope resolution operator (aka the '::')
//     std::cout << first::x;

//     return 0;
// }

// int main(){
//     using namespace first; // implies which 'x' you are referring to

//     std::cout << x;

//     return 0;
// }

// int main(){
//     using namespace std; // this saves us typing 'std::', however this can be dangerous
//                          //     there is a lot of options in this std
//     using std::cout; // safer, only does this one
//     using std::string; 

//     string name = "Bro"; // not 'std::string'

//     cout << name;        // not 'std:cout'

//     return 0;
// }

// --------------------------------------------------------------

/*
    typedef = reserved keyword used to create an additonal name
              (alias) for another data type.
              New identifier for an existing type
              Helps with readability and reduces typos
        - Use when there is a clear benefit
        - Replaced with 'using' (work better w/templates)
*/

// #include <vector>

// // 'pairlist' is the alias for the confusing sequence
// // naming convention-- end alias with '_t' for 'type'
// typedef std::vector<std::pair<std::string, int>> pairlist_t; 

// typedef std::string text_t;
// typedef int number_t;

// // how you'd use 'using' instead of 'typedef'
// using text_t = std::string;
// using number_t = int;

// int main(){
//     // std::vector<std::pair<std::string, int>> pairlist; // this become the following
//     pairlist_t pairlist;

//     text_t firstName = "Garrett";
//     number_t age = 29;

//     std::cout << firstName << '\n';
//     std::cout << age << '\n';

//     return 0;
// }

// --------------------------------------------------------------

/*
    arithmatic operators = return the result of a specific
                            arithmetic operation (+ - * /)
*/

// int main(){
    // int students = 20;

    // ADDITION
    // students = students + 1; // better ways to write this
    // students+=1;             // okay, but we can do better
    // students++;                 // nice

    // SUBTRACTION
    // students = students - 1;
    // students-=1;
    // students--;

    // MULTIPLICATION   
    // students = students * 2;
    // students*=2;
    
    // DIVISION   
    // students = students / 2;
    // students/=2;
    // students/=3;  // returns 6, will truncate a decimal 
                     // (need to change 'students' to a double type for decimals)

    // Modulus (for remainers)
    // int remainder = students % 3;

    // Parenthesis (PEMDAS)
    // students = 6 - (5 + 4) * 3 / 2;    

    // std::cout << students << '\n';

    // std::cout << remainder;

    // return 0;
// }

// --------------------------------------------------------------

/*
    type conversion = conversion of a value from one data type to another
            - Implicit = automatic
            - Explicit = precede value with new data type (int)
*/

// int main(){
    // int x = 3.14; // implicitly converts this decimal (double) to an int '3'
    // double x = (int) 3.14; // explicitly converts 3.14 into an int
    
    // char x = 100; // implicitly converts 100 to it's ascii char value 'd'
    // std::cout << x;
    // std::cout << (char) 100;  // explictily converts it to char value

//     int correct = 8;
//     int questions = 10;
//     double score = correct/(double)questions * 100; // need to explicitly convert
//                                                     // questions since it 8/10 is a decimal

//     std::cout << score << "%";
    

//     return 0;
// }

// --------------------------------------------------------------

/*
    Accepting user input
        - cout << (insertion operator)
        - cin >> (extraction operator)
*/

// int main(){
    // std::string name;
    // int age;

    // std::cout << "What is your full name?: ";
    // std::cin >> name; // using spaces can cause issues on inputs (only gets first word)
    // std::getline(std::cin, name); // fixes prob above by getting whole line
        // if age was asked first, there is a hidden line space, that will break this cin
        // (will only get first word), you need to somehow ignore that whitespace
    // std::getline(std::cin >> std::ws,  name);

//     std::cout << "What is your age?: ";
//     std::cin >> age;

//     std::cout << "Your name is " << name << std::endl;
//     std::cout << "You are " << age << " years old.";

//     return 0;
// }

// --------------------------------------------------------------

/* 
    Useful Math Related Functions
        - www.cplusplus.com/reference/cmath/ 
            has more math functions available for use
*/
// #include <cmath>

// int main(){

//     double x = 3.14;
//     double y = 4;
//     double z;

    // z = std::max(x, y); // can use min and max w/out <cmath>
    // z = std::min(x, y);
    // z = pow(2, 3);  // returns 2^3 = 8
    // z = sqrt(9);
    // z = abs(-3); // absolute value = 3
    // z = round(x); // 3.14 rounds to 3
    // z = ceil (x); // always rounds up (to 4)
    // z = floor(x); // always rounds down

//     std::cout << z;
//     return 0;
// }

// --------------------------------------------------------------

// Hypotenuse calc prac prob

// #include <cmath>

// int main(){
//     double a;
//     double b;
//     double c;

//     std::cout << "Enter side A: ";
//     std::cin >> a;
    
//     std::cout << "Enter side B: ";
//     std::cin >> b;

//     a = pow(a, 2);
//     b = pow(b, 2);
//     c = sqrt(a + b);
    // c = sqrt(pow(a, 2), pow(b,2)) // another, shorter way to rewrite

//     std::cout << "The hypotenuse for sides " << sqrt(a) << 
//         " & "  << sqrt(b) << " is " << c;

//     return 0;
// }

// --------------------------------------------------------------

/*  
    If statements = do soemthing if a statement is true.
                    If not, don't do it
*/

// int main(){
//     int age;

//     std::cout << "Enter your age: ";
//     std::cin >> age;

//     if(age >= 18) {
//         std::cout << "You're an adult!";
//     }
//     else if (age < 0){
//         std::cout << "You're a liar!";
//     }
//     else {
//         std::cout << "You're a child!";
//     }

//     return 0;
// }

// --------------------------------------------------------------
/* 
    Switch = alternative to many "else if" statements
            - compare one value against matching cases
 */
// int main(){
//     int month;
//     std::cout << "Enter a month (1-12): ";
//     std::cin >> month;

    // Using normal if/else conditionals...
    // if (month == 1){
    //     std::cout << "It is January";
    // }
    // else if (month == 2){
    //     std::cout << "It is February";
    // }
    // else if (month == 3){
    //     std::cout << "It is March";
    // }
    // else if (month == 4){
    //     std::cout << "It is April";
    // }
    // else if (month == 5){
    //     std::cout << "It is May";
    // }
    // else if (month == 6){
    //     std::cout << "It is June";
    // }
    // else if (month == 7){
    //     std::cout << "It is July";
    // }
    // else if (month == 8){
    //     std::cout << "It is August";
    // }
    // else if (month == 9){
    //     std::cout << "It is September";
    // }
    // else if (month == 10){
    //     std::cout << "It is October";
    // }
    // else if (month == 11){
    //     std::cout << "It is November";
    // }
    // else if (month == 12){
    //     std::cout << "It is December";
    // }
    // else {
    //     std::cout << "Please enter a number 1-12.";
    // }

    // Using a Switch
//     switch(month){
//         case 1:
//             std::cout << "It is January";
//             break;
//         case 2:
//             std::cout << "It is February";
//             break;
//         case 3:
//             std::cout << "It is March";
//             break;
//         case 4:
//             std::cout << "It is April";
//             break;
//         case 5:
//             std::cout << "It is May";
//             break;
//         case 6:
//             std::cout << "It is June";
//             break;
//         case 7:
//             std::cout << "It is July";
//             break;
//         case 8:
//             std::cout << "It is August";
//             break;
//         case 9:
//             std::cout << "It is September";
//             break;
//         case 10:
//             std::cout << "It is October";
//             break;
//         case 11:
//             std::cout << "It is November";
//             break;
//         case 12:
//             std::cout << "It is December";
//             break;
//         default:
//             std::cout << "Needs a num 1-12";     
//     }

//     return 0;
// }

// --------------------------------------------------------------
/* 
    Ternary Operator-- replaces if/else statements
            - condition ? doIfTrue : doIfFalse
 */
int main(){
    

    return 0;
}
// --------------------------------------------------------------












