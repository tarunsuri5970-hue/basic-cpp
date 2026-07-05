#include <iostream>
using namespace std;

struct student{
    int rollNumber;
    string name;
    float marks[3];
};

int main(){
    float total=0;
    float average;
    student s;
    cout<<"enter roll number = ";
    cin>>s.rollNumber;
    cout<<"enter name = ";
    cin>>s.name;
    cout<<"enter number of any three subjects ";
    for(int i=0; i<3; i++){
        cin>>s.marks[i];
        total += s.marks[i];
    }
    average = total/3;

    cout<<"average markd of student is = "<<average;
}