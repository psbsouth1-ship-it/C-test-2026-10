#include <iostream>
using namespace std;
int main() {
    int grade;
    cin>>grade;
    if (grade>=90){
        cout<<"优秀";
    }
    else if (grade>=60){
        cout<<"及格";
    }
    else{
        cout<<"不及格";
    }
    return 0;
}
