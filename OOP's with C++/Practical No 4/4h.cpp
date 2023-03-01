// Practical-4.(h)
// Aim:Write a C++ program that illustrate Hierarchical
// inheritance.
// Algorithm:(i)Start
//  (ii)class A{…};class B{….};class C{….};
//  (iii)Main function
//  (iv)Print the result
//  (v)Stop
// Theory: When several classes are derived from common
// base class it is called hierarchical inheritance.
Program:
#include <iostream>
class A
{
 public:
 int x,y;
 void getdata()
 {
 std::cout<<"\nEnter value of x and y:\n";
 std::cin>>x>>y;
 }
};
class B:public A
{
 public:
 void product()
 {
 std::cout<<"\nProduct= "<<x<<y;
 }
};
class C:public A
{
 public:
 void sum()
 {
 std::cout<<"\nSum= "<<x+y;
 }
};
int main(){
 std::cout<<"08_Rabin Nadar";
 B obj1;
 C obj2;
 obj1.getdata();
 obj1.product();
 obj2.getdata();
 obj2.sum();
 return 0;
}