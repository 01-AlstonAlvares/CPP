// Practical-4.(d)
// Aim: Write a C++ program to generate Fibonacci Series by
// using Constructor to initialize the Data Members.
// Algorithm:(i)Start
//  (ii)class (class_name)
//  (iii)Formula
//  (iv)Print the result
//  (v) Stop
// Theory: In case of fibonacci series, next number is the
// sum of previous two numbers for example 0, 1, 1, 2, 3,
// 5, 8, 13, 21 etc. The first two numbers of fibonacci
// series are 0 and 1.
Input:
#include <iostream>
class fibonacci
{
 long int a,b;
 public:
 fibonacci()
 {
 a=-1;
 b=1;
 }
 void fibseries(int n)
 {
 int i,next;
 std::cout<<"\nResultant fibonacci series";
 std::cout<<"\n-----------------------------------\n";
 for(i=0;i<n;i++)
 {
 next=a+b;
 std::cout<<next<<std::endl;
 a=b;
 b=next;
 }
 }
};
int main(){
 std::cout<<"08_Rabin Nadar";
 fibonacci f;
 int n;
 std::cout<<"\nFibonacci series\n";
 std::cout<<"\nEnter the range= ";
 std::cin>>n;
 f.fibseries(n);
 return 0;
}