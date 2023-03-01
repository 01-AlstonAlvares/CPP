// Practical-9.(a)
// Aim:Write a C++ program to implement the exception
// handling with multiple catch statements.
// Algorithm:(i)Start
//  (ii)Declare and define the function test().
//  (iii)Within the try block check whether the value
// is greater than zero or not.
//  (iv) Read the integer and character values for the
// function test().
//  (v)Stop
// Theory:In this practical,we will see a C++ program to
// implement the exception handling with multiple catch
// statements.
Program:
#include <iostream>
void test(int x)
{
 try
 {
 if(x==1)
 throw x;
 else
 if(x==-1)
 throw 1.0;
 std::cout<<"End of try-black\n";
 }
 catch(char c)
 {
 std::cout<<"Caught a Character\n";
 }
 catch(int c)
 {
 std::cout<<"Caught an integer\n";
 }
 catch(double c)
 {
 std::cout<<"Caught a Double\n";
 }
 std::cout<<"End of try-catch system\n";
}
int main(){
 std::cout<<"08_Rabin Nadar"<<std::endl;
 std::cout<<"Testing Multiple Catches\n";
 std::cout<<"x==1\n";
 test(1);
 std::cout<<"x==0\n";
 test(0);
 std::cout<<"x==2\n";
 test(2);
 return 0;
}