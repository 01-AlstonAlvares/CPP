// Practical-4.(c)
// Aim: Write a C++ program to access members of a STUDENT
// class using pointer to object members.
// Algorithm:(i) Start
//  (ii)class_name*pointer_name
//  (iii)pointer_name=new class_name
//  (iv)pointer_name->member_function()
//  (v) Stop
// Theory: To access a member function by pointer, we
// have to declare a pointer to the object and initialize it
// (by creating the memory at runtime, yes! We can
// use new keyboard for this).
Input:
#include <iostream>
class Student
{
 public:
 int roll_num;
 void print()
 {
 std::cout<<"\nRoll Number is: "<<roll_num;
 }
};
int main()
{
 std::cout<<"08_Rabin Nadar";
 Student s,*sp;
 sp=&s; //pointer to object
 int Student::*ptr=&Student::roll_num;
 s.*ptr=10;
 s.print();
 sp->*ptr=20;
 sp->print();
 return 0;
}