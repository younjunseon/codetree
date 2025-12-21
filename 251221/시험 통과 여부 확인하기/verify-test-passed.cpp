#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a;

    cin >> a;

    if(a>=80){
        cout<<"pass";
    }
    else{
        int n;
        n = 80-a;
        cout<<n<<" more score";
    }
    return 0;
}