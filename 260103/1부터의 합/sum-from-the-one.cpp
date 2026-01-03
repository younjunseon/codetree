#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin>>a;
    int sum;
    sum = 0;

    for(int i=1;i<=100;i++){
        sum += i;
        if(sum>a){
            cout<<i;
            break;
        }
    }
    return 0;
}