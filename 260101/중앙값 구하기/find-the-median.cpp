#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(c<b){
            cout<<b;
        }
        else{
            if(a>c){
                cout<<c;
            }
            else{
                cout<<a;
            }
        }
    }
    else{
        if(a<c){
            if(b>c){
                cout<<c;
            }
            else{
                cout<<b;
            }
        }
        else{
            cout<<a;
        }
    }
    return 0;
}