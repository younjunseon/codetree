#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,cnt,count;
    cin>>a>>b;
    count = 0;

    for(a;a<b+1;a++){
        cnt = 0;
        for(int i=1;i<a+1;i++){
            if(a%i == 0){
                cnt+=1;
            }
        }
        if(cnt == 3){
            count += 1;
        }
    }

    cout<<count;
    return 0;
}