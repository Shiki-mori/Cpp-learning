// // 4.1 arrayone.cpp -- small arrays of integers
// #include <iostream>
// int main() {
//   using namespace std;
//   int yams[3];
//   yams[0] = 7;
//   yams[1] = 8;
//   yams[2] = 6;

//   int yamcosts[3]{20, 30, 40};

//   cout << "Total yams = " << yams[0] + yams[1] + yams[2] << endl
//        << "The package with " << yams[1] << " yams costs " << yamcosts[1]
//        << " cents per yam." << endl;
//   int total =
//       yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] * yamcosts[2];
//   cout << "The total yam expense is " << total << " cents." << endl;
//   cout << "Size of yams array = " << sizeof yams << "bytes." << endl;
//   cout << "Size of one element = " << sizeof yams[0] << "bytes." << endl;

//   cout << "apple"
//           "banana";
//   cout << "applebanana";
//   return 0;
// }

// // 4.2 strings.cpp -- storing strings in an array
// #include <cstring> //for the strlen() function
// #include <iostream>

// int main() {
//   using namespace std;
//   const int Size = 15;
//   char name1[Size];
//   char name2[Size] = "C++owboy";

//   cout << "Howdy!I'm " << name2 << "!What's your name?\n";
//   cin >> name1;
//   cout << "Well," << name1 << ",your name has " << strlen(name1)
//        << " letters and is stored";
//   cout << "in an array of " << sizeof name1 << " bytes." << endl;
//   cout << "Your initial is " << name1[0] << '.' << endl;
//   name2[3] = '\0'; // set to null character
//   cout << "Here are the first 3 characters of my name: ";
//   cout << name2 << "." << endl;

//   cout<<name1[20];

//   return 0;
// }

// 4.3 instr1.cpp -- reading more than one string
// #include <iostream>
// int main() {
//   using namespace std;
//   const int ArSize = 20;
//   char name[ArSize];
//   char dessert[ArSize];

//   cout << "Enter your name:" << endl;
//   cin >> name;
//   cout << "Enter your favorite dessert:" << endl;
//   cin >> dessert;
//   cout << "I have some delicious " << dessert;
//   cout << " for you, " << name <<'.'<< endl;

//   return 0;
// }

// // 4.4 instr2.cpp -- reading more than one word with getline
// #include <iostream>
// int main() {
//   using namespace std;
//   const int ArSize = 20;
//   char name[ArSize];
//   char dessert[ArSize];

//   cout << "Enter your name:" << endl;
//   cin.getline(name, ArSize);
//   cout << "Enter your favorite dessert:" << endl;
//   cin.getline(dessert, ArSize);
//   cout << "I have some delicious " << dessert;
//   cout << " for you, " << name << '.' << endl;

//   return 0;
// }

// // 4.5 instr3.cpp -- reading more than one word with getline
// #include <iostream>
// int main() {
//   using namespace std;
//   const int ArSize = 20;
//   char name[ArSize];
//   char dessert[ArSize];

//   cout << "Enter your name:" << endl;
//   cin.get(name, ArSize).get();
//   cout << "Enter your favorite dessert:" << endl;
//   cin.get(dessert, ArSize).get();
//   cout << "I have some delicious " << dessert;
//   cout << " for you, " << name << '.' << endl;

//   return 0;
// }

// //4.6 numstr.cpp -- following number input with line input
// #include<iostream>
// int main()
// {
//   using namespace std;
//   cout<<"What year was your house built?"<<endl;
//   int year;
//   cin>>year;
//   cout<<"What is its street address?\n";
//   char address[80];
//   cin.getline(address,80);
//   cout<<"Year built: "<<year<<endl;
//   cout<<"Address: "<<address<<endl;
//   cout<<"Done!\n";
//   return 0;
// }

// // 4.6.1 numstr1.cpp -- following number input with line input
// #include <iostream>
// int main() {
//   using namespace std;
//   cout << "What year was your house built?" << endl;
//   int year;
//   cin >> year;
//   char ch;
//   cin.get(ch);
//   cout << "What is its street address?\n";
//   char address[80];
//   cin.getline(address, 80);
//   cout << "Year built: " << year << endl;
//   cout << "Address: " << address << endl;
//   cout << "Done!\n";
//   return 0;
// }

// // 4.7 strtype1.cpp -- using the C++ string class
// #include <iostream>
// #include <string>
// int main() {
//   using namespace std;
//   char charr1[20];
//   char charr2[20] = "jaguar";
//   string str1;
//   string str2 = "panther";

//   cout << "Enter a kind of feline: ";
//   cin >> charr1;
//   cout << "Enter another kind of feline: ";
//   cin >> str1;
//   cout << "Here are some felines:\n";
//   cout << charr1 << ", " << charr2 << ", " << str1 << ", " << str2 << ".\n";
//   cout << "The third letter in " << charr2 << " is " << charr2[2] << ".\n";
//   cout << "The third letter in " << str2 << " is " << str2[2] << ".\n";

//   return 0;
// }

// // 4.8 strtype2.cpp -- assigning,adding,and appending
// #include <iostream>
// #include <string>
// int main() {
//   using namespace std;
//   string s1 = "penguin";
//   string s2, s3;

//   cout << "You can assign one string object to another: s2 = s1\n";
//   s2 = s1;
//   cout << "s1: " << s1 << endl;
//   cout << "s2: " << s2 << endl;

//   cout << "You can assign a C-style string to a string object.\n";
//   cout << "s2 = \"buzzard\"\n";
//   s2 = "buzzard";
//   cout << "s2 = " << s2 << endl;
//   cout << "You can concatenate strings: s3 = s1 + s2\n";
//   s3 = s1 + s2;
//   cout << "s3 = " << s3 << endl;
//   cout << "You can append strings.\n";
//   s1 += s2;
//   cout << "s1 += s2 yields s1 = " << s1 << endl;
//   s2 += " for a day";
//   cout << "s2 += \" for a day\" yields s2 = " << s2 << endl;
//   cout << "s2 has " << s2.size() << " letters.\n";
//   return 0;
// }

// // 4.10 strtype4.cpp -- line input
// #include <cstring>
// #include <iostream>
// #include <string>

// int main() {
//   using namespace std;
//   char charr[20];
//   string str;

//   cout << "Length of string in charr before input: " << strlen(charr) <<
//   endl; cout << "Length of string in str before input: " << str.size() <<
//   endl; cout << "Enter a line of text:\n"; cin.getline(charr, 20); cout <<
//   "You entered: " << charr << endl; cout << "Enter another line of text:\n";
//   getline(cin, str);
//   cout << "You entered: " << str << endl;
//   cout << "Length of string in charr after input: " << strlen(charr) << endl;
//   cout << "Length of string in str after input: " << str.size() << endl;

//   return 0;
// }

// //
// #include<iostream>
// #include<string>
// int main() {
//   using namespace std;
//   cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << '\n'<<'\n';
//   cout << R"+*("(Who wouldn't?)",she whispered.)+*" << endl;

//   return 0;
// }

// // 4.11 structur.cpp -- a simple structure
// #include <iostream>
// struct inflatable {
//   char name[20];
//   float volume;
//   double price;
// };

// int main() {
//   using namespace std;
//   inflatable guest = {"Glorious Gloria", 1.88, 29.99};
//   inflatable pal = {"Shikimori Miyako", 3.12, 32.99};
//   cout << "Expand your guest list with " << guest.name;
//   cout << " and " << pal.name << ".\n";
//   cout << "You can have both for $";
//   cout << guest.price + pal.price << "!\n";

//   return 0;
// }

// // 4.12 assgn_st.cpp -- assigning structures
// #include <iostream>
// struct inflatable {
//   char name[20];
//   float volume;
//   double price;
// };
// int main() {
//   using namespace std;
//   inflatable bouquet = {"sunflowers", 0.20, 12.49};
//   inflatable choice;
//   cout << "bouquet: " << bouquet.name << " for $";
//   cout << bouquet.price << ".\n";

//   choice = bouquet;
//   cout << "choice: " << choice.name << " for $";
//   cout << choice.price << ".\n";

//   return 0;
// }

// // 4.13 arrstruc.cpp -- an array of structures
// #include <iostream>
// struct inflatable {
//   char name[20];
//   float volume;
//   double price;
// };
// int main() {
//   using namespace std;
//   inflatable guests[2] = {{"bambi", 0.5, 21.99}, {"Godzilla", 2000, 565.99}};

//   cout << "The guests " << guests[0].name << " and " << guests[1].name
//        << " have a combined volume of " << guests[0].volume +
//        guests[1].volume
//        << " cubic feet.\n";
//   return 0;
// }

// //
// #include <iostream>
// struct widget {
//   char brand[20];
//   int type;
//   union{
//     long id_num;
//     char id_char[20];
//   };
// };
// int main() {
//   using namespace std;
//   widget prize;

//   if (prize.type == 1)
//     cin >> prize.id_num;
//   else
//     cin >> prize.id_char;
// }

// // 4.14 address.cpp -- using the & operator to find addresses
// #include <iostream>
// int main() {
//   using namespace std;
//   int donuts = 6;
//   double cups = 4.5;

//   cout << "donuts value = " << donuts << " and donuts address = " << &donuts
//        << endl;
//   cout << "cups value = " << cups << " and cups address = " << &cups;

//   return 0;
// }

// // 4.15 pointer.cpp -- our first pointer variable
// #include <iostream>

// int main() {
//   using namespace std;
//   int updates = 6;
//   int *p_updates;
//   p_updates = &updates;

//   // express values two ways
//   cout << "Values: updates = " << updates;
//   cout << ", *p_updates = " << *p_updates << endl;

//   // express address two ways
//   cout << "Addresses: &updates = " << &updates;
//   cout << ", p_updates = " << p_updates << endl;

//   // use pointer to change value
//   *p_updates = *p_updates + 1;
//   cout << "Now updates = " << updates << endl;

//   return 0;
// }

// // 4.16 init_ptr.cpp -- initialize a pointer
// #include <iostream>

// int main() {
//   using namespace std;
//   int higgens = 5;
//   int *pt = &higgens;

//   cout << "Value of higgens = " << higgens
//        << " , Address of higgens = " << &higgens << endl;
//   cout << "Value of *pt = " << *pt << " , Value of pt = " << pt << endl;

//   return 0;
// }

// // 4.17 use_new.cpp -- using the new operator
// #include <iostream>

// int main() {
//   using namespace std;
//   int nights = 1001;
//   int *pt = new int;
//   *pt = 1001;

//   cout << "nights value = ";
//   cout << nights << ": location " << &nights << endl;
//   cout << "int ";
//   cout << "value = " << *pt << " :location = " << pt << endl;

//   double *pd = new double;
//   *pd = 10000001.0;

//   cout << "double ";
//   cout << "value = " << *pd << ": location = " << pd << endl;
//   cout << "location of pointer pd: " << &pd << endl;
//   cout << "size of pt = " << sizeof pt;
//   cout << ": size of *pt = " << sizeof *pt << endl;
//   cout << "size of pd = " << sizeof pd;
//   cout << ": size of *pd = " << sizeof *pd << endl;

//   return 0;
// }

// // 4.18 arraynew.cpp -- using the new operator for arrays
// #include <iostream>

// int main() {
//   using namespace std;
//   double *p3 = new double[3];
//   p3[0] = 0.2;
//   p3[1] = 0.5;
//   p3[2] = 0.8;
//   cout << "p3[1] is " << p3[1] << ".\n";
//   p3 = p3 + 1;
//   cout << "Now p3[0] is " << p3[0] << " and p3[1] is " << p3[1] << ".\n";
//   p3 = p3 - 1;
//   delete[] p3;

//   return 0;
// }

// // 4.19 addpntrs.cpp -- pointer addition
// #include <iostream>
// int main() {
//   using namespace std;
//   double wages[3] = {10000.0, 20000.0, 30000.0};
//   short stacks[3] = {3, 2, 1};

//   // Here are two ways to get the address of an array
//   double *pw = wages;
//   short *ps = &stacks[0];
//   // with array element
//   cout << "pw = " << pw << ", *pw = " << *pw << endl;
//   pw = pw + 1;
//   cout << "add 1 to the pw pointer:\n";
//   cout << "pw = " << pw << ", *pw = " << *pw << endl << endl;

//   cout << "ps = " << ps << ", *ps = " << *ps << endl;
//   ps = ps + 1;
//   cout << "add 1 to the ps pointer:\n";
//   cout << "ps = " << ps << ", *ps = " << *ps << endl << endl;

//   cout << "access two elements with array notation\n";
//   cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] <<
//   endl
//        << endl;

//   cout << "access two elements with pointer notation\n";
//   cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1)
//        << endl
//        << endl;

//   cout << sizeof(wages) << " = size of wages array\n";
//   cout << sizeof(pw) << " = size of pw pointer\n";

//   return 0;
// }

// // 4.20 ptrstr.cpp -- using pointers to strings
// #include <cstring>
// #include <iostream>

// int main() {
//   using namespace std;
//   char animal[20] = "bear";
//   const char *bird = "wren";
//   char *ps;

//   cout << animal << " and " << bird << endl;
//   // cout << ps;  //may display garbage, may cause a crash

//   cout << "Enter a kind of animal: ";
//   cin >> animal;
//   // cin >> ps;  //too horrible

//   ps = animal;
//   cout << ps << "!\n";
//   cout << "Before using strcpy():\n";
//   cout << animal << " at " << (int *)animal << endl;
//   cout << ps << " at " << (int *)ps << endl;

//   ps = new char[strlen(animal) + 1]; // get new storage
//   strcpy(ps, animal);                // copy string to new storage

//   cout << "After using strcpy():\n";
//   cout << animal << " at " << (int *)animal << endl;
//   cout << ps << " at " << (int *)ps << endl;
//   delete[] ps;

//   return 0;
// }

// // 4.21 newstrct.cpp
// #include <iostream>
// struct inflatable {
//   /* data */
//   char name[20];
//   float volume;
//   double price;
// };

// int main() {
//   using namespace std;
//   inflatable *ps = new inflatable;
//   cout << "Enter the name of inflatable item: ";
//   cin.get(ps->name, 20);

//   cout << "Enter volume in cubic feet: ";
//   cin >> (*ps).volume;

//   cout << "Enter price: ";
//   cin >> ps->price;

//   cout << "Name: " << (*ps).name << endl;
//   cout << "Volume: " << ps->volume << " cubic feet\n";
//   cout << "Price: $" << ps->price << endl;

//   delete ps;
//   return 0;
// }

// 4.22
#include <cstring>
#include <iostream>

using namespace std;
char *getname(void);
int main() {
  char *name;
  name = getname();
  cout << name << " at " << (int *)name << endl;
  delete[] name;

  name = getname();
  cout << name << " at " << (int *)name << endl;
  delete[] name;

  return 0;
}

char *getname() {
  char temp[80];
  cout << "Enter last name: ";
  cin >> temp;

  char *pn = new char[strlen(temp) + 1];
  strcpy(pn, temp);

  return pn;
}