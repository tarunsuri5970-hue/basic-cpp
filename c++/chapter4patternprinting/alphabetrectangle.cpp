 # include <iostream>
using namespace std;
int main (){
int n;
cout<<"enter n : ";
cin>>n;
int m;
cout<<"enter m : ";
cin>>m;
    for(int i=1 ; i<=n ;i++){          // for rows
        for (int j=1 ;j<=m; j++)        // for columns
        {
            cout<<(char)(j+64);                     // through ASCII value we can print alphabet instead of star because in ASCII A is 65 and we have to print A for j=1 so we can do j+64 because when j is 1 then it will print 65 which is A and when j is 2 then it will print 66 which is B and so on.
        }
        cout<<endl;
    }}