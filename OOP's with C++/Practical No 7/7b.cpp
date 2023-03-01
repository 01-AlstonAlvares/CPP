// Practical-7.(b)
// Aim:Write a C++ program to design a class representing
// the information regarding digital library(books,tape: book
// & tape should be separate classes having the base class as
// media).The class should have the functionality for adding
// new item,issuing,deposit,etc.The program should use the
// runtime polymorphism.
// Algorithm:(i)Start
//  (ii)class media{..};class book{..};class
// tape{..};void tape{..};
//  (iii)Main function
//  (iv)Print the result
//  (v)Stop
// Theory:In this practical,we will design a class representing
// the information regarding digital library.
Program:
#include <iostream>
#include<string.h>
class media
{
 protected:
 char title[50];
 float price;
 public:
 media(char *s,float a)
 {
 strcpy(title,s);
 price=a;
 }
 virtual void display(){}
};
class book:public media
{
 int pages;
 public:
 book(char *s,float a,int p):media(s,a)
 {
 pages=p;
 }
 void display();
};
class tape:public media
{
 float time;
 public:
 tape(char*s,float a,float t):media(s,a)
 {
 time=t;
 }
 void display();
};
void book::display()
{
 std::cout<<"\n Title: "<<title;
 std::cout<<"\n Pages: "<<pages;
 std::cout<<"\n Price: "<<price;
}
void tape::display()
{
 std::cout<<"\n Title: "<<title;
 std::cout<<"\n Play Time: "<<time<<"mins";
 std::cout<<"\n Price: "<<price;
}
int main()
{
 std::cout<<"08_Rabin Nadar"<<std::endl;
 char*title=new char[30];
 float price,time;
 int pages;
 std::cout<<"\nEnter Book Details\n";
 std::cout<<"\nTitle: ";
 std::cin>>title;
 std::cout<<"\nPrice: ";
 std::cin>>price;
 std::cout<<"\nPages: ";
 std::cin>>pages;
 book book1(title,price,pages);
 std::cout<<"\nEnter Tape Details";
 std::cout<<"\nTitle: ";
 std::cin>>title;
 std::cout<<"\nPrice: ";
 std::cin>>price;
 std::cout<<"\nPlay Time(mins): ";
 std::cin>>time;
 tape tape1(title,price,time);
 media*list[2];
 list[0]=&book1;
 list[1]=&tape1;
 std::cout<<"\nMedia Details";
 std::cout<<"\n...........Book.......";
 list[0]->display();
 std::cout<<"\n...........Tape.......";
 list[1]->display();
 return 0;
}