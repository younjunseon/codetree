#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    int b,c;
    cin>>a;
    for(int i = 0; i<a;i++){
        int sum = 0;
        cin>>b>>c;
        for(b;b<c+1;b++){
            if(b%2 == 0){
                sum += b;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}