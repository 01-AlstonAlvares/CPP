// Practical-9.(b)
// Aim:Write a C++ program to implement the exception
// handling with rethrowing in Exception.
// Algorithm:(i)Start
//  (ii)Try block(statement that causes exception)
//  (iii)Catch block(statement that handles
// exception)
//  (iv)Stop
// Theory: In C++, Exception handling is the special process
// of reacting to the appearance, while computation.
Program:
#include <iostream>
void divide(double x,double y)
{
 std::cout<<"Inside Function\n";
 try
 {
 if(y==0.0)
 throw y;
 else
 std::cout<<"Division="<<x/y<<"\n";
 }
 catch(double)
 {
 std::cout<<"Caught double inside function\n";
 throw;
 }
 std::cout<<"End of Function\n";
}
int main(){
 std::cout<<"08_Rabin Nadar"<<std::endl;
 std::cout<<"Inside Main\n";
 try
 {
 divide(10.5,2.0);
 divide(20.0,0.0);
 }
 catch(double)
 {
 std::cout<<"Caught double inside main\n";
 }
 std::cout<<"End of Main\n";
 return 0;
}