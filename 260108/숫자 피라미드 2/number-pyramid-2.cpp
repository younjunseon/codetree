#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin>>a;

    int n = 1;

    for(int i = 0; i<a; i++){
        for(int j = 0; j<i+1;j++){
            cout<<n<<" ";
            n++;
        }
        cout<<"\n";
    }
    return 0;
}