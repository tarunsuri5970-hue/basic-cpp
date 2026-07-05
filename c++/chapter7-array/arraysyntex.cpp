#include <iostream>
using namespace std;
int main (){
    int arr[5]; //declaring an array of size 5
    cout<<"Enter a number: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    for(int i=0; i<5; i++){
        cout<<"The number at index "<<i<<" is: "<<arr[i]<<endl;
    }
}