# include<iostream>
using namespace std;

int main(){
    int a , b , c ; 
    cout<<"enter first number :";
    cin>>a;     
    cout<<"enter second number :";
    cin>>b;
    cout<<"enter third number :";   
    cin>>c;
    if (a>=b){
        if (a>=c){
        cout<<"greater no. is " <<a;
        }
        else {
            cout<<"greater no. is " <<c;
        }
    }
    else {
        if (b>=c){
        cout<<"greater no. is " <<b;
        }
        else {
            cout<<"greater no. is " <<c;
        }
    }
}