// //7.1 calling.cpp --defining, prototyping, and calling a function
// #include<iostream>
// void simple(); //function prototype
// int main(){
//     using namespace std;
//     cout<<"main() will call the simple() function: \n";
//     simple();  //function call
//     cout<<"main() is finished with the simple() function.\n";
//     //cin.get();
//     return 0;
// }

// //function definition
// void simple(){
//     using namespace std;
//     cout<<"I'm but a simple function.\n";
// }

// // 7.1.1 cube.cpp -- testing cube() function
// #include<iostream>
// using namespace std;
// double cube(double x); //function prototype
// int main(){
//     double a = 1.2;
//     cout<<"The cube of "<<a<<" is "<<cube(a)<<".\n";
//     a = 5.0;
//     cout<<"The cube of "<<a<<" is "<<cube(a)<<".\n";
//     return 0;
// }
// double cube(double x){ //function definition
//     return x*x*x;
// }

// // 7.2 protos.cpp -- using prototypes and function calls
// #include <iostream>
// void cheers(int);
// double cube(double x);
// int main() {
//   using namespace std;
//   cheers(5); // function call
//   cout << "Give me a number: ";
//   double side;
//   cin >> side;
//   double volume = cube(side); // function call
//   cout << "A " << side << "-foot cube has a volumn of ";
//   cout << volume << " cubic feet.\n";
//   cheers(cube(2));
//   return 0;
// }

// void cheers(int n) {
//   using namespace std;
//   for (int i = 0; i < n; i++) {
//     cout << "Cheers! ";
//   }
//   cout << endl;
// }

// double cube(double x) { return x * x * x; }

// // 7.3 twoarg.cpp --a function with two arguments
// #include <iostream>
// using namespace std;
// void n_chars(char, int); // function prototype
// int main() {
//   int times;
//   char ch;

//   cout << "Enter a character: ";
//   cin >> ch;
//   while (ch != 'q') { // q to quit
//     cout << "Enter an integer: ";
//     cin >> times;
//     n_chars(ch, times); // function with two arguments
//     cout << "\nEnter another character or press the q-key to quit: ";
//     cin >> ch;
//   }
//   cout << "The value of times is " << times << ".\n";
//   cout << "Bye.\n";
//   return 0;
// }

// void n_chars(char c, int n) { // displays c n times
//   while (n-- > 0)             // continue until n reaches 0
//     cout << c;
// }

// // 7.4 lotto.cpp --probability of winning
#include <iostream>
long double probability(unsigned numbers, unsigned picks);
int main() {
  using namespace std;
  double total, choices;
  cout << "Enter the total number of choices on the game card and\n"
       << "the number of picks allowed:\n";
  while ((cin >> total >> choices) && (choices <= total)) {
    cout << "You have one chance in ";
    cout << probability(total, choices);
    cout << " of winning.\n";
    cout << "Next two numbers (any letters to quit): ";
  }
  cout << "bye\n";
  return 0;
}

long double probability(unsigned numbers, unsigned picks) {
  long double result = 1.0;
  long double n;
  unsigned p;
  for (n = numbers, p = picks; p > 0; n--, p--) {
    result = result * n / p;
  }
  return result;
}