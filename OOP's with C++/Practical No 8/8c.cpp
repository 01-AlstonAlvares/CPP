// Practical-8.(c)
// Aim:Write a C++ program to implement I/O operations on
// characters, I/O operations includes inputting a
// string,Calculating length of the string,Storing the String in a
// file,fetching the stored characters from it,etc.
// Algorithm:(i)Start
//  (ii)Main function
//  (iii)Print the result
//  (iv)Stop
// Theory: C++ IO is type safe. IO operations are defined for
// each of the type.
Program:
#include <iostream>
#include <fstream>
#include <string.h>
int main() {
 std::cout<<"08_Rabin Nadar"<<std::endl;
 char string[80];
 std::cout<<"Enter a string\n";
 std::cin>>string;
 int len=strlen(string);
 std::fstream file;
 file.open("TEXT",std::ios::in | std::ios::out);
 for(int i=0;i<len;i++)
 file.put(string[i]);
 file.seekg(0);
 char ch;
 while(file)
 {
 file.get(ch);
 std::cout<<ch;
 }
 return 0;
}