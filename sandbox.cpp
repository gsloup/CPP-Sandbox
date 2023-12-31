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

// using namespace std;  

// int main(){
    
//     int grade = 56;
//     string message;
//     bool isEven; 

//     grade >= 60 ? message = "Pass" : message = "Fail"; // same as JS

//     cout << message << endl;

//     grade % 2 == 0 ? isEven = true : isEven = false;

//     cout << isEven << endl;  // Returns 1 or 0 for True or False

//     return 0;
// }

// --------------------------------------------------------------
/* 
    Logical Operators-- And (&&) Or (||) Not(!)
 */

// using namespace std;

// int main() {
//     bool answer1 = false;
//     bool answer2 = true;

//     if (answer1 && answer2) {
//         cout << "Both answers are true" << endl;
//     }
//     if (answer1 || answer2) {
//         cout << "At least one answer is true" << endl;
//     }
//     if (!answer1) {
//         cout << "This answer is false" << endl;
//     }
//     return 0;
// }

// --------------------------------------------------------------
/* 
    Useful String Functions
        -- Visit this website for a more comprehensive list:
            // https://cplusplus.com/reference/string/string/ 
 */

// using namespace std;

// int main() {
//     string name;

//     cout << "What is your name? ";
//     getline(cin, name);

//     if(name.empty()) { // Checks if value is empty
//         cout << "You didn't enter anything.  Please try again." << endl; 
//     } 
//     else if(name.length() > 12) { // calcs length of string
//         cout << "Your name cannot be more than 12 char long." << endl;
//     } 
//     else {
//         cout << "Welcome " << name << endl;
//     }

//     // name.clear(); // clears value, now empty

//     // string emailGen = name.append("@gmail.com"); // appends value to end of existing string

//     // cout << "Here is your new email: " << emailGen << endl;

//     // cout << "The second letter in your name is " << name.at(1) << endl;  // grabs specific value at index 

//     // name.insert(0, "$"); // inserts a value in a given string-> (location, value)

//     // cout << "Your Money name is " << name << endl; 

//     int spacesInName = name.find(' '); // returns index of a value

//     cout << "Space location the provided name? " << spacesInName << endl; 

//     name.erase(0, 3); // erases the first 3 char of the given string
//                       //    -- upto but not including the last index (0, 1, 2)

//     return 0;
// }

// --------------------------------------------------------------
/* 
    While Loops
 */
// using namespace std;

// int main() {
//     int counter = 0;
//     while(counter < 10) {
//         cout << "Looped through " << counter << " times" << endl;
//         counter++;
//     }
//     return 0;

//     string name;
//     while(name.empty()){
//         cout << "Enter your name: ";
//         getline(cin, name);
//     }
//     cout << "Hey there " << name << endl;
// }

// --------------------------------------------------------------
/* 
    Do While Loops - do some block of code first, then repeat again 
                     if condition is true
 */

// using namespace std;
// int main(){
//     int number;

//     do{
//         cout << "Enter a positive number";
//         cin >> number;
//     }while(number < 0);

//     cout << number << "is a positve number" << endl;

//     return 0;
// }

// --------------------------------------------------------------
/* 
    For Loops 
 */

// using namespace std;

// int main(){
//     for (int i=0; i<=3; i++){
//         cout << "Hello x" << i << endl;
//     }   
//     return 0;

// }

// --------------------------------------------------------------
/* 
    Break and Continue:
        - Break: break out of a loop
        - Continue: skip current iteration
 */

// using namespace std;

// int main(){

//     for (int i = 1; i<=20; i++) {
//         if (i == 13) {
//             cout << "unlucky number" << endl;
//             continue; // will skip this iteration and keep going
//         }
//         if (i >= 19) {
//             break; // will stop the loop
//         }
//         cout << i << "\n";
//     }

//     return 0;
// }

// --------------------------------------------------------------
/* 
    Nested Loops
 */

// using namespace std;

// int iterations = 0;

// int main(){
//     for(int i=0; i<5; i++){
//         for(int j=0; j<5; j++){
//             cout << "i: " << i << " & j: " << j << endl;
//             iterations++;
//         }
//     }
//     cout << "Total loops: " << iterations << endl;
//     return 0;
// }

// --------------------------------------------------------------
/* 
    Random Number Generator-
        It's psuedo-random (not truly random)
 */

// #include <ctime> // helps with working with random numbers

// using namespace std;

// int main(){
//     srand(time(NULL)); // use current calendar time as a seed

//     // int num = rand(); // 1 in over 32k chance, need to alter with % to get num chances
//     int num = rand() % 6; // 1 in 6 chance

//     num++; // makes it start at 1

//     cout << num;

//     return 0;
// }

// --------------------------------------------------------------
/* 
    Random Event Generator-
        It's psuedo-random (not truly random)
 */

// #include <ctime>

// using namespace std;

// int main(){
//     srand(time(0)); // using current time as a seed to gen random nums

//     int randNum = rand() % 5 + 1; // num range 1-5

//     switch(randNum) {
//         case 1: cout << "You win $500!\n";
//             break;
//         case 2: cout << "You win an Amazon gift card!\n";
//             break;
//         case 3: cout << "You win new dinnerware!\n";
//             break;
//         case 4: cout << "You win a free coffee!\n";
//             break;
//         case 5: cout << "You win a sticker!\n";
//             break;
//     }

//     return 0;
// }
// --------------------------------------------------------------
/* 
    Functions
 */

// using namespace std;

// // If you want to have the func below, need to initialize it above main func
// void happyBirthday(string name, int age);

// int main(){
//     string name = "Gary";
//     int age = 30;

//     happyBirthday(name, age);

//     return 0;
// }

// void happyBirthday(string bdayBoy, int bdayAge){
//     cout << "happy " << bdayAge << "th bday " << bdayBoy << endl;
// }

// --------------------------------------------------------------
/* 
    Return- Returns a value back to the spot where you called the 
                encompassing function
 */

// using namespace std;
// double square(double length); // the first 'double' is the return type
// double cube(double length);

// int main(){
//     double length = 5.0;
//     double area = square(length);
//     double volume = cube(length);

//     cout << "The length: " << length << "cm. The area: " << area << "cm^2. The volume: " << volume << "cm^3.\n";
// }

// double square(double length){
//     return length * length;
// }

// double cube(double length){
//     return length * length * length;
// }

// --------------------------------------------------------------
/* 
    Overloaded Functions
 */

// using namespace std;

// void makePizza();                   // each of these are different functions
// void makePizza(string topping);     // they just have dif signatures

// int main(){
//     makePizza();
//     makePizza("pepperoni");
    
//     return 0;
// }

// void makePizza(){
//     cout << "Here is your pizza!" << endl;
// }
// void makePizza(string topping){
//     cout << "Here is your " << topping << " pizza!" << endl;
// }


// --------------------------------------------------------------
/* 
    Variable Scope--
        * Local variables = declared inside a function or block {}
        * Global variables = declared outside of all functions
 */

// using namespace std;

// int myNum = 3; // globally defined.  Accessible everywhere in this file

// void printNum();

// int main(){
//     int myNum = 1; // stuck inside this function

//     cout << "myNum inside main func: " << myNum << endl;
//     printNum();    

//     return 0;
// }
// void printNum(){
//     // cout << "myNum inside main func: " << myNum << endl;
//     cout << "myNum inside main func: " << ::myNum << endl; // can use a scope resolution operator to call the global variable
// }    

// --------------------------------------------------------------
/* 
    Arrays
*/

// using namespace std;

// int main(){
//     string car[] = {"corvette", "Mustang", "Camry"};

//     car[2] = "Lambo";

//     cout << car[0]; // corvette
//     cout << car[1]; // mustang
//     cout << car[2]; // lambo 

//     return 0;
// }

// --------------------------------------------------------------
/* 
    sizeof() = operator that determines the size (in bytes) of a:
        - variable, data type, class, objects, etc.
*/

// using namespace std;

// int main(){
//     double gpa = 2.5;
//     string name = "garrett";
//     char grade = 'F';
//     bool student = true;
//     char grades[] = {'A', 'B', 'C', 'D', 'F'};
//     string students[] = {"Spongebob", "Patrick", "Squidward"};

//     cout << sizeof(gpa) << " bytes\n"; // the gpa variable is 8 bytes (same with 'double')
//     cout << sizeof(name) << " bytes\n"; // string is 32 bytes since it holds an address where text is located
//                                         //      * changing the string shouldn't affect size
//     cout << sizeof(grade) << " byte\n"; // 1 byte
//     cout << sizeof(student) << " byte\n"; // 1 byte
//     cout << sizeof(grades) << " bytes\n"; // 5 bytes-- 5 chars in the array

//     cout << sizeof(grades)/sizeof(char) << " elements in the 'grades' array\n"; // can divide by an individual item (like grades[0]) or just the data type (char)
//     cout << sizeof(students)/sizeof(string) << " elements in the 'students' array\n"; // get the length of the array like above
//     return 0;
// }

// --------------------------------------------------------------
/* 
    Iterate over an Array
*/

// using namespace std;

// int main(){
//     string names[] = {"Gabby", "Garrett", "Georgia"};

//     int arrayLength = sizeof(names)/sizeof(string);

//     for (int i=0; i<arrayLength; i++) {
//         cout << "Hello " << names[i] << endl;
//     }

//     return 0;
// }

// --------------------------------------------------------------
/* 
    Foreach loop - loop that eases the traversal over an 
                    iterable data set
        * Less flexibility, but also simpler syntax than ^^ for loop
*/

// using namespace std;

// int main(){
//     string names[] = {"Ed", "Edd", "Eddy"};

//     for (string name : names){
//         cout << "Hi there " << name << endl;
//     }
//     return 0;
// }

// --------------------------------------------------------------
/* 
    Pass array to a function
*/

// using namespace std;

// double getTotal(double prices[], int size);

// int main(){
//     double prices[] = {49.99, 15.05, 75, 9.99};
//     int size = sizeof(prices)/sizeof(prices[0]);
//     double total = getTotal(prices, size);

//     cout << "$" << total;

//     return 0;
// }

// // when a func receives an array, it decays into a pointer, so you can't do the normal
// //  'sizeof' func without issues
// double getTotal(double prices[], int size){
//     double total = 0;

//     for(int i = 0; i<size; i++){
//         total += prices[i];
//     }

//     return total;

// }

// --------------------------------------------------------------
/* 
    Search array for an element
*/

// using namespace std;
// int searchArray(int array[], int size, int element);

// int main(){
//     int numbers[] = {1,2,3,4,5,6,7,8,9,10};
//     int size = sizeof(numbers)/sizeof(numbers[0]);
//     int index;
//     int myNum;

//     cout << "Enter element to search for: \n";
//     cin >> myNum;

//     index = searchArray(numbers, size, myNum);

//     if(index != -1){
//         cout << myNum << " is at index " << index;
//     }
//     else {
//         cout << myNum << " is not in the array\n";
//     }


//     return 0;
    
// }
// int searchArray(int array[], int size, int element){
//     for(int i=0; i<size; i++){
//         if(array[i] == element){
//             return i;
//         }
//     }
//     return -1;

// }

// --------------------------------------------------------------
/* 
    Sort an Array
*/

// using namespace std;

// void sort(int array[], int size);

// int main(){

//     int array[] = {2, 1, 10, 8, 6, 5, 7, 3, 4, 9};
//     int size = sizeof(array)/sizeof(array[0]);
    
//     sort(array, size);

//     for(int element : array){
//         cout << element << " ";
//     }

//     return 0;
// }

// void sort(int array[], int size){

//     int temp;
//     for(int i = 0; i < size-1; i++) // don't need to compare the last item in the array to anything
//         for(int j = 0; j < size-i-1; j++){ // don't need to sort any elements that are already sorted
//             if (array[j] > array[j + 1]){ // change this arrow to the other direction to make it decending sort
//                 temp = array[j];
//                 array[j] = array[j + 1];
//                 array[j + 1] = temp;

//             }
//         }
// }

// --------------------------------------------------------------
/* 
    fill() - Fills a range of elements with a specific value
            fill(begin, end, value)
*/

using namespace std;

int main(){
    // A) First basic way
    // string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};
    // string foods[100];
    // fill(foods, foods + 100, "pizza");

    // B) can also do below
    // const int SIZE = 100;
    // string foods[SIZE];
    // fill(foods, foods + SIZE, "pizza");

    // C) To break it up into halfs
    // const int SIZE = 100;
    // string foods[SIZE];
    // fill(foods, foods + (SIZE/2), "hamburger");
    // fill(foods + (SIZE/2), foods + SIZE, "pizza");

    // D) To Break into 3rds
    const int SIZE = 100;
    string foods[SIZE];
    fill(foods, foods + (SIZE/3), "hamburger");
    fill(foods + (SIZE/3), foods + (SIZE/3)* 2, "pizza");
    fill(foods + (SIZE/3)* 2, foods + SIZE, "hotdog"); // actually gives you 34, one extra

    for (string food : foods){
        cout << food << endl;
    }
    return 0;
}
// --------------------------------------------------------------