// Practical-4.(f)
// Aim: Write a C++ program that illustrate multiple
// inheritance.
// Algorithm:(i)Start
//  (ii)Class A
//  (iii)Class B
//  (iv)Class C: public A, public B
//  (v)Stop
// Theory: Multiple Inheritance is a feature of C++ where a
// class can inherit from more than one classes. The
// constructors of inherited classes are called in the same
// order in which they are inherited. For example, in the
// following program, B’s constructor is called before A’s
// constructor.
Input:
#include <iostream>
class student_detail
{
 protected:
 int rno,sum,i,marks[5];
 public:
 void detail()
 {
 std::cout<<"Enter the Roll No: "<<std::endl;
 std::cin>>rno;
 std::cout<<"Enter the marks of five
subjects"<<std::endl;
 for(i=0;i<5;i++)
 {
 std::cin>>marks[i];
 }
 sum=0;
 for(i=0;i<5;i++)
 {
 sum=sum+marks[i];
 }
 }
};
class sports_mark
{
 protected:
 int s_mark;
 public:
 void get_mark()
 {
 std::cout<<"\nEnter the sports mark: ";
 std::cin>>s_mark;
 }
};
class result:public student_detail,public sports_mark
{
 int tot;
 float avg;
 public:
 void disp()
 {
 tot=sum+s_mark;
 avg=tot/6;
 std::cout<<"\n\n\tRoll No: "<<rno<<"\n\tTotal:
"<<tot<<std::endl;
 std::cout<<"\n\tAverage Marks: "<<avg;
 }
};
int main(){
 std::cout<<"08_Rabin Nadar"<<std::endl;
 result obj;
 obj.detail();
 obj.get_mark();
 obj.disp();
 return 0;
}