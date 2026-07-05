#include <iostream>
using namespace std;

int main(){
    int sum= 0,n;
    cout<<"enter positve number = ";
    cin>>n;
    if(n<0){
        cout<<"please enter positive value";
        return 0;
    }

    for(int i = 2; i<n; i+=2){
        sum += i;
    }
    cout<<"sum of all even numbers are = "<<sum;
}