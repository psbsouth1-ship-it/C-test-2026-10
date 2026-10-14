#include <iostream>
using namespace std;
int main() {
    int n,m=0;
    cin>>n;
    while(n>0){
        m+=n;
        n--;
    }
    cout<<m;
    return 0;
}
