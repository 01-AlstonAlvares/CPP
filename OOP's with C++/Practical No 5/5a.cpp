// Practical-5.(a)
// Aim:Write a C++ program to design a student class
// representing student roll no. and a test class (derived class
// of student) representing the scores of the student in various
// subjects and sports class representing the score in
// sports.The sports and test class should be inherited by a
// result class having the functionality to add the scores and
// display the final result for a student.
// Algorithm:(i)Start
//  (ii)protected{….};public{…};void{…..};
//  (iii)Print the result
//  (iv)Stop
// Theory: A class is a user-defined data type that we can use
// in our program, and it works as an object constructor, or a
// "blueprint" for creating objects.
Program:
#include <iostream>
class student
{
 protected:
 int roll_number;
 public:
 void get_number(int a)
 {
 roll_number=a;
 }
 void put_number(void)
 {
 std::cout<<"Roll No:"<<roll_number<<"\n";
 }
};
class test:public student
{
 protected:
 float part1,part2;
 public:
 void get_marks(float x,float y)
 {
 part1=x;
 part2=y;
 }
 void put_marks(void)
 {
 std::cout<<"Marks obtained"<<"\n"
 <<"part1= "<<part1<<"\n"
 <<"part2= "<<part2<<"\n";
 }
};
class sports
{
 protected:
 float score;
 public:
 void get_score(float s)
 {
 score=s;
 }
 void put_score()
 {
 std::cout<<"Sports wt: "<<score<<"\n\n";
 }
};
class result:public test,public sports
{
 float total;
 public:
 void display();
};
void result::display()
{
 total=part1+part2+score;
 put_number();
 put_marks();
 put_score();
 std::cout<<"Total score: "<<total<<"\n";
}
int main(){
 std::cout<<"08_Rabin Nadar"<<std::endl;
 result student_1;
 student_1.get_number(8);
 student_1.get_marks(44.5,40.0);
 student_1.get_score(45.0);
 student_1.display();
 return 0;
}