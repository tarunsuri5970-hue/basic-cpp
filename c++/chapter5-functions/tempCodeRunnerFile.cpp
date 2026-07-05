#include <iostream>
using namespace std;
void swap(int &a, int &b){    // pass by reference
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 12;
    int b = 25;
    cout<<a<<" "<<b<<endl;;
    swap(a,b);
    cout<<a<<" "<<b<<endl;;
}