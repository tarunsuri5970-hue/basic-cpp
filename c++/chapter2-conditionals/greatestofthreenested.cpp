#include <iostream>
using namespace std;
int main (){
   int a, b, c ; 
   cout<<"enter first numbers : ";
   cin>>a;
   cout<<"enter second numbers : ";
   cin>>b;
   cout<<"enter third numbers : ";
   cin>>c;
    if (a>=b){
         if (a>=c){
              cout<<"greatest number is : "<<a;
         }
         else {
              cout<<"greatest number is : "<<c;
         }
    }
    else {
         if (b>=c){
              cout<<"greatest number is : "<<b;
         }
         else {
              cout<<"greatest number is : "<<c;
         }
    }

}