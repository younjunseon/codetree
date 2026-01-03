#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, cnt;
    cin>>a;
    cnt = 0;

    for(int i = 1;i<=a;i++){
        if(i%2 != 0 and i%3 != 0 and i%5 != 0){
            cnt+=1;
        }
    }
    cout<<cnt;
    return 0;
}