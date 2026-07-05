#include <iostream>
using namespace std;

class vehicle{
    private:
        string make;
        int year;
    public:
        vehicle(string x, int y){
            make = x;
            year = y;
        }
    void displayInfo(){
        cout<<"make = "<<make<<endl;
        cout<<"year = "<<year<<endl;
    }
};
class car:public vehicle{
    private:
        string model;
    public:
        car(string x, int y, string z):vehicle(x, y){
            model = z;;
        }
    void drive(){
        cout<<"this is derive car"<<endl;
    };
    void displayCar(){
        displayInfo();
        cout<<"model = "<<model;
    }
};
class Bicycle:public vehicle{
    private:
        string type;
    public:
        Bicycle(string x, int y ,string k):vehicle(x, y){
            type = k;
        }
    void pedal(){
        cout<<"this is pedal"<<endl;
    };
    void displayCycle(){
        displayInfo();
        cout<<"type"<<type<<endl;
    };
};

int main(){
    car c("my",2026,"jj-234");
    c.drive();
    c.displayCar();

    Bicycle b("hg", 2026, "74jhh7");
    b.pedal();
    b.displayCycle();
}