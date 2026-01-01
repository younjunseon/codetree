#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    if(a%4==0){
        if(a%100== 0 ){
            if(a%400 != 0){
                cout<<"false";
            }
            else{
                cout<<"true";
            }
        }
        else{
            cout<<"true";
        }
    }
    else{
        cout<<"false";
    }
    return 0;
}