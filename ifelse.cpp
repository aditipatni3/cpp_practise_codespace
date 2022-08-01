#include<iostream>

using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='a' || ch<='z')
    {
        cout<<"small\n";
    }
    else if(ch>='A' || ch<='Z')
    {
        cout<<"big"<<endl;
    }
    else if(ch>='1'|| ch <'9'){
        cout<<"number"<<endl;
    }
    return 0;
}