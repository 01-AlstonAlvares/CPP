// Practical-10.(b)
// Aim:Write a C++ program to get maximum of two number
// using Class template.
// Algorithm:(i)Start
//  (ii)class{…};
//  (iii)Main function
//  (iv)Print the result
//  (v)Stop
// Theory:Templates are the foundation of generic
// programming,which involves writing code in a way that is
// independent of any particular type.
Program:
#include <iostream>
#include <stdio.h>
template<class T>
class TClassMax
{
 T x,y;
 public:
 TClassMax()
 {}
 TClassMax(T first,T second)
 {
 x=first;
 y=second;
 }
 T getMaximum()
 {
 if(x>y)
 return x;
 else
 return y;
 }
};
int main(){
 std::cout<<"08_Rabin Nadar"<<std::endl;
 TClassMax <int> iMax;//(100,75);
 int a,b,i;
 TClassMax <float> fMax;//(90.78,750.98);
 float c,d,j;
 std::cout<<"Class Template programs : Generic
Programing : Get Maximum Number\n";
 std::cout<<"Enter A,B values(integer): ";
 std::cin>>a>>b;
 iMax=TClassMax<int>(a,b);
 i=iMax.getMaximum();
 std::cout<<"Result Max Int: "<<i;
 std::cout<<"\n\nEnter C,D values(float): ";
 std::cin>>c>>d;
 fMax=TClassMax<float>(c,d);
 j=fMax.getMaximum();
 std::cout<<"Result Max Float: "<<j;
 return 0;
}