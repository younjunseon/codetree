#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    for(int i = b;i>=a;i--){
        cout<<b<<" ";
        b--;
    }
    return 0;
}