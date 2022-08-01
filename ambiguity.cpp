

class car{
    public:
    void mode(){
        cout<<"road transportation"<<endl;
    }
};

class ship{
    public:
    void mode(){
        cout<<"water transportation"<<endl;
    }
};

class vehicle : public ship, public car{
    
};

int main(){

    vehicle V;
    V.car::mode();// incase of two functions with the same name
    return 0;
}
