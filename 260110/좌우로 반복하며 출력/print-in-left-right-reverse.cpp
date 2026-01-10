#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    int n;
    cin>>a;
    for(int i = 0; i<a;i++){
        if(i%2 == 1){
            n = a;
            for(int j = 0;j<a;j++){
                
                cout<<n;
                n -= 1;
            }
        }
        else{
            n = 1;
        
            for(int j = 0;j<a;j++){
                cout<<n;
                n += 1;
            }
                
        }

        cout<<"\n";
    }
    return 0;
}