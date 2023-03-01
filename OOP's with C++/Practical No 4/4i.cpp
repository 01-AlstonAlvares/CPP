// Practical-4.(i)
// Aim:Write a C++ program illustrating how the constructors
// are implemented and the order in which they are called
// when the classes are inherited.Use three classes named
// alpha,beta,gamma such that alpha,beta are base class and
// gamma is derived class inheriting alpha & beta.
// Algorithm:(i)Start
//  (ii)class S:public A1,virtual A2{….};
//  (iii)Print the result
//  (iv)Stop
// Theory: Constructor is a class member function with the
// same name as the class.
Program:
#include <iostream>
class alpha
{
 int x;
 public:
 alpha(int i)
 {
 x=i;
 std::cout<<"alpha initialized\n";
 }
 void show_x(void)
 {
 std::cout<<"x= "<<x<<"\n";
 }
};
class beta
{
 float y;
 public:
 beta(float j)
 {
 y=j;
 std::cout<<"beta initialized\n";
 }
 void show_y(void)
 {
 std::cout<<"y= "<<y<<"\n";
 }
};
 class gamma:public beta,public alpha
 {
 int m,n;
 public:
 gamma(int a,float b,int c,int d):
 alpha(a),beta(b)
 {
 m=c;n=d;
 std::cout<<"gamma initialized\n";
 }
 void show_mn(void){
 std::cout<<"m= "<<m<<"\n";
 std::cout<<"n= "<<n<<"\n";
 }
 };
 int main(){
 std::cout<<"08_Rabin Nadar"<<std::endl;
 gamma g(5, 10.75, 20, 30);
 g.show_x();
 g.show_x();
 g.show_mn();
 return 0;
 }
