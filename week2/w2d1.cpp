#include <iostream>
using namespace std;
int getMAx(int a,int b){
    int max=a;
    if(b>a){
        max=b;
    }
    return max;
}
int main() {
    cout<<"示例：";

    cout<<"输入3，8"<<getMAx(3,8)<<endl;
    cout<<"输入5，5"<<getMAx(5,5);

    int a1,b1;
    cin>>a1>>b1;
    int Max=getMAx(a1,b1);
    cout<<Max;
    
    return 0;
}
