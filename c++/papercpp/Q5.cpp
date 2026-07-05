#include<iostream>
using namespace std;
class book
{
    private:
    string tittle, author, isbn ;
    int publicationyear;
    

public:
book(string t,string a, int p, string i)
    { 
        tittle=t;
        author=a;
        publicationyear=p;
         isbn=i;
    }
  void display(){
    cout<<"tittle:"<<tittle<<endl;
    cout<<"author:"<<author<<endl;
    cout<<"year:"<<publicationyear<<endl;
    cout<<"ISBN:"<<isbn<<endl; 
}
};    
    int main()
    {
        book b("thegod","tarun",2007,"786")
        b.display();
        return 0;
    }


    

  

    
