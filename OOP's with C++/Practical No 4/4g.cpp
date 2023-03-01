// Practical-4.(g)
// Aim:Write a C++ program that illustrate multi-level
// inheritance.
// Algorithm:(i)Start
//  (ii)Base class-> Wood,Intermediate class->
// furniture,subclass-> table
//  (iii)Print the result
//  (iv)Stop
// Theory: Multilevel Inheritance in C++ is the process of
// deriving a class from another derived class.
Program:
#include <iostream>
class A
{
 public:
 A()
 {
 int a=5,b=6,c;
 c=a+b;
 std::cout<<"Sum is: "<<c<<std::endl;
 }
};
class B:public A
{
 public:
 B()
 {
 int d=50,e=35,f;
 f=d-e;
 std::cout<<"Difference is: "<<f<<std::endl;
 }
};
class C:public B
{
 public:
 C()
 {
 int g=10,h=20,i;
 i=g*h;
 std::cout<<"Product is: "<<i<<std::endl;
 }
};
int main(){
 std::cout<<"08_Rabin Nadar"<<std::endl;
 C obj;
 return 0;
}