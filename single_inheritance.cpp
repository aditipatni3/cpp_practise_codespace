#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int height;

    void speak(){
        cout<<"mode of conversation"<<endl;
    }
};

class Dog : public Animal{

};

int main(){
    Dog Bruno;
Bruno.speak();// when you have to print function, dont need cout, just access the function
cout<<Bruno.age<<endl;
return 0;
}