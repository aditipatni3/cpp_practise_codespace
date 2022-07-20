#include<iostream>
using namespace std;

class Vehicle{
   public:
    int tyres;
    float petrol;
    void mode(){
        cout<<"mode of transportation:"<<endl;
    }
};

class car:public Vehicle
{
    char color;
};
 class nano: public car{
        
         };

 int main(){
        nano nano;
        nano.mode();
        car Car;
        cout<<"enter number of tyres of nano"<<endl;
        cin>>nano.tyres;
        cout<<"no of tyres in car"<<endl;
        cin>>Car.tyres;// toh sirf object banake values assign kar paayenge
        cout<<nano.tyres<<endl;
        cout<<Car.tyres;

    return 0;

 }