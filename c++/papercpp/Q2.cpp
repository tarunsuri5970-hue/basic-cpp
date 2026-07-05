#include<iostream>
using namespace std;
int main(){
    int sum=0, n;
    cout<<"enter the positive integer :";
    cin>>n;
    for (int i=1 ; i<=n ; i++){
        if (i%2==0){
            sum = sum + i;
        }
    }
    cout<<"sum of even numbers from 1 to "<<n<<" is "<<sum;
}