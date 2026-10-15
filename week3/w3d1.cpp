#include <iostream>
#include <string>

using namespace std;

class Animal{
public:

    string specie;

    void speak(){
        cout<<"i am "<<specie<<endl;
    }
};

class dog : public Animal{
public:
    int age;
};

class cat{

};

int main() {

    dog pape;
    pape.specie="dog";
    pape.speak();

    return 0;
}
