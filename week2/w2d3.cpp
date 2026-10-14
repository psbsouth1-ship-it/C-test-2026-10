#include <iostream>
using namespace std;
int main() {
    int arr[255]={80,60,95,70,85};
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}
