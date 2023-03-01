// Practical-6.(a)
// Aim:Write a C++ program to maintain the reords of person
// with details(Name and Age)and find the eldest among
// them.The program must use this pointer to return the
// result.
// Algorithm:(i)Start
//  (ii)class(class_name)
//  (iii)public{…};void display{…};
//  (iv)Main function
//  (v)Print the result
//  (vi)Stop
// Theory:In this practical,we will see a C++ program to
// maintain the records of person with details.
Program:
#include <iostream>
#include<string.h>
class person
{
 char name[20];
 float age;
 public:
 person(char*s,float a)
 {
 strcpy(name, s);
 age=a;
 }
 person & greater(person & x)
 {
 if
 (x.age>=age)
 return x;
 else
 return*this;
 }
 void display(void)
 {
 std::cout<<"Name: "<<name<<"\n"
 <<"Age: "<<age<<"\n";
 }
};
int main()
{
 std::cout<<"08_Rabin Nadar"<<std::endl;
 person
p1("Sweta",25.0),p2("Sadaf",35.0),p3("Kubra",32.0);
 person p=p1.greater(p3);
 std::cout<<"Elder Person is:\n";
 p.display();
 p=p1.greater(p2);
 std::cout<<"\nElder person is:\n";
 p.display();
 return 0;
}