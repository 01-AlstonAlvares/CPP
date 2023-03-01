// Practical-8.(a)
// Aim:Write a C++ program to show conversion from string
// to int and vice-versa.
// Algorithm:(i)Start
//  (ii)string to int
//  (iii)int to string
//  (iv)Print the result
//  (v)Stop
// Theory:In this practical,we will see,how to convert string
// to int and int to string in C++
Program:
// String to int
// C++ program to demonstrate the
// use of a stringstream to
// convert string to int
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
 std::cout<<"08_Rabin Nadar"<<std::endl;
 string s = "12345";
 // object from the class stringstream
 stringstream geek(s);
 // The object has the value 12345 and stream
 // it to the integer x
 int x = 0;
 geek >> x;
 // Now the variable x holds the value 12345
 cout << "Value of x : " << x;
 return 0;
}
// Int to string
Program:
#include <iostream>
#include <sstream> // header file for stringstream
using namespace std;
int main()
{
 std::cout<<"08_Rabin Nadar";
 // initialize an integer
 int num = 20;
 // applying the stringstream class
 // declare a stream object
 stringstream stream;
 stream << num;
 // initializing a string
 string str;
 stream >> str;
 cout << "\n"
 << "Value of num is : " << num << "\n";
 cout << "String representation of the num after
applying stringstream is : " << str;
return 0;
}