#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter first element = ";
    cin>>arr[0];
    cout<<"enter second element = ";
    cin>>arr[1];
    for(int i = 2; i<n; i++){
        arr[i]=arr[i-1]+arr[i-2];
    };
    cout<<"array elements are = ";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    };
}