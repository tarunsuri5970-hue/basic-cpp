#include<iostream>
using namespace std;
struct student
{
    int rollNumber;
    string name;
    float marks[3];
};

int main ()
{
    student s;
    float sum=0 , avg;
    cout<<"enter the rollNo :" ;
    cin>>s.rollNumber;
    cout<<"enter Name :";
    cin>>s.name;
   cout<<"enter the marks of student  :";
   for ( int i=0; i<3; i++)
   {
   cin>>s.marks[i];
   sum+=s.marks[i];
}
   avg=sum/3;
   cout<<"average marks is :"<<avg;
   return 0;


}
