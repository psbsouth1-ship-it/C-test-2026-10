#include <iostream>
#include <string>

using namespace std;

class Animal{
public:
    string specie;
    virtual void speak(){ // 虚函数
        cout<<"i am animal"<<endl;
    }
};

class Dog : public Animal{
public:
    void speak() override { // 再定义
        cout<<"i am "<<specie<<endl;
    }
};

int main() {
    Dog pot=Dog();
    pot.specie="pot dog";
    pot.speak();

    Animal& pape = pot; // 父类引用
    pape.specie="pape";
    pape.speak();

    return 0;
}
