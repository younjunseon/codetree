#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a;
    cin>>a;

    if(a>=80){
        cout<<"pass";
    }
    else{
        int x;
        x = 80 - a;
        cout<<x<<" more score";
    }

    return 0;
}