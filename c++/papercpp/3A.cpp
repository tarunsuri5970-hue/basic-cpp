#include <iostream>
using namespace std;

class Book{
    private:
        string title;
        string author;
        int year;
        string isbn;
    public:
        Book(string x, string y, int z, string k){
            title = x;
            author = y;
            year = z;
            isbn = k;
        };
    void display(){
        cout<<"titlt = "<<title<<endl;
        cout<<"author = "<<author<<endl;
        cout<<"year = "<<year<<endl;
        cout<<"isbn = "<<isbn<<endl;
    };
};

int main(){
    Book b("book","me", 2025,"866686");
    b.display();
}