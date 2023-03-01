// Practical-7.(a)
// Aim:Write a C++ program illustrating the use of virtual
// functions in class.
// Algorithm:(i)Start
//  (ii)class Base
//  (iii)Main function
//  (iv)Print the result
//  (v)Stop
// Theory: A virtual function is a member function in the
// base class that we expect to redefine in derived classes.
Program:
#include <iostream>
class Base
{
 public:
 void display()
 {
 std::cout<<"\nDisplay Base";
 }
 virtual void show()
 {
 std::cout<<"\nShow Base";
 }
};
class Derived:public Base
{
 public:
 void display()
 {
 std::cout<<"\nDisplay Derived";
 }
 void show()
 {
 std::cout<<"\nShow Derived";
 }
};
int main()
{
 std::cout<<"08_Rabin Nadar";
 Base B;
 Derived D;
 Base*bptr;
 std::cout<<"\nbptr points to Base\n";
 bptr=&B;
 bptr->display();
 bptr->show();
 std::cout<<"\n\nbptr points to derived\n";
 bptr =&D;
 bptr->display();
 bptr->show();
 return 0;
}