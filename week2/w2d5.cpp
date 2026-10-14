#include <iostream>
using namespace std;
class Student{
private:
    int score;
public:

    Student(){
        score=85;
    }

    void setscore(int a){
        score=a;
    }
    void getscore(){
        cout<<score<<endl;
    }

    ~Student(){
        cout<<"destroyed";
    }
};

int main() {
    Student s1;
    s1.setscore(85);
    s1.getscore();
    return 0;
}
