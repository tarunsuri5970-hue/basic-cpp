#include <iostream>
using namespace std;
int main (){
    int arr[5] = {1,2,3,4,5}; //initialising + declaring an array of size 5
    arr[0] = 10; //updating the value at index 0
    cout<<"The numbers in the array are: ";
    for(int i=0; i<5; i++){
        cout<<arr[i]*2<<" ";
    }
    cout<<endl;
}