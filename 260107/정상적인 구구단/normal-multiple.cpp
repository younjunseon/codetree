#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin>>a;
    int j;

    for(int i = 1;i<a+1;i++){
        for(j = 1;j<a;j++){
            cout<<i<<" * "<<j<<" = "<<i*j<<", ";
        }
        cout<<i<<" * "<<j<<" = "<<i*j<<"\n";
    }
    return 0;
}