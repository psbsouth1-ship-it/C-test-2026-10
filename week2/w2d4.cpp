#include <iostream>
using namespace std;
class Student{
private:
    int score;
public:
    void setscore(int a){
        score=a;
    }
    void getscore(){
        cout<<score;
    }
};

int main() {
    Student s1;
    s1.setscore(85);
    s1.getscore();
    return 0;
}
