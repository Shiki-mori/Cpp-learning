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