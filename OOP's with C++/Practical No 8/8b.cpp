// Practical-8.(b)
// Aim:Write a C++ program implementing basic operation of
// class ios i.e. setf,unsetf,precision,etc.
// Algorithm:(i)Start
//  (ii)Main function
//  (iii)Print the result
//  (iv)Stop
// Theory:Setf is used to set specific format flags.Unsetf is
// used to remove the flag setting. The precision of a floatingpoint number defines how many significant digits it can
// represent without information loss.
Program:
#include <iostream>
int main() {
 std::cout<<"08_Rabin Nadar"<<std::endl;
 int i=52;
 float a=425.0;
 float b=123.500328;
 char str[]="Dream.Then make it happen!";
 std::cout.setf(std::ios::unitbuf);
 std::cout.setf(std::ios::showpos);
 std::cout<<i<<std::endl;
 std::cout.setf(std::ios::showbase);
 std::cout.setf(std::ios::uppercase);
std::cout.setf(std::ios::hex,std::ios::basefield);
 std::cout<<i<<std::endl;
 std::cout.setf(std::ios::oct,std::ios::basefield);
 std::cout<<i<<std::endl;
 std::cout.fill('0');
 std::cout<<"Fill character"<<std::cout.fill()<<std::endl;
 std::cout.setf(std::ios::dec,std::ios::basefield);
 std::cout.width(10);
 std::cout<<i<<std::endl;
 std::cout<<(std::ios::left,std::ios::adjustfield);
 std::cout.width(10);
 std::cout<<i<<std::endl;
 std::cout.setf(std::ios::internal,std::ios::adjustfield);
std::cout.width(10);
 std::cout<<std::endl;
 std::cout<<std::endl;
 std::cout.width(10);
 std::cout<<str<<std::endl;
 std::cout.width(40);
 std::cout.setf(std::ios::left,std::ios::adjustfield);
 std::cout.width(40);
 std::cout<<str<<std::endl;
 std::cout.precision(6);
 std::cout<<"Precision"<<std::cout.precision();
 std::cout.setf(std::ios::showpoint);
 std::cout.unsetf(std::ios::showpos);
 std::cout<<std::endl<<a;
 std::cout.unsetf(std::ios::showpoint);
std::cout<<std::endl<<a;
 std::cout.setf(std::ios::fixed,std::ios::floatfield);
 std::cout<<std::endl<<b;
 std::cout.setf(std::ios::scientific,std::ios::floatfield);
 std::cout<<std::endl<<b;
 b=5.375;
 std::cout.precision(14);
std::cout.setf(std::ios::fixed,std::ios::floatfield);
 std::cout<<std::endl<<b;
 std::cout.setf(std::ios::scientific,std::ios::floatfield);
 std::cout<<std::endl<<b;
 std::cout.unsetf(std::ios::showpoint);
 std::cout.unsetf(std::ios::unitbuf);
 return 0;
}