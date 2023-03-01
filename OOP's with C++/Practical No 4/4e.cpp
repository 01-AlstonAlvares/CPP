// Practical-4.(e)
// Aim: Write a C++ program that illustrate single inheritance.
// Algorithm:(i)Start
//  (ii)class <derived_class_name>:<access-specifier>
//  (iii)<base_class_name>
//  (iv)//body
//  (v)Stop
// Theory: Using inheritance, we have to write the functions
// only one time instead of three times as we have inherited
// the rest of the three classes from the base class.
Input:
#include <iostream>
class base
{
 public:
 int x;
 void getdata()
 {
 std::cout<<"Enter the value of x= ";
 std::cin>>x;
 }
};
class derive:public base
{
 private:
 int y;
 public:
 void readdata()
 {
 std::cout<<"Enter the value of y= ";
 std::cin>>y;
 }
 void product()
 {
 std::cout<<"Product= "<<x*y;
 }
};
int main(){
 std::cout<<"08_Rabin Nadar"<<std::endl;
 derive a;
 a.getdata();
 a.readdata();
 a.product();
 return 0;
}