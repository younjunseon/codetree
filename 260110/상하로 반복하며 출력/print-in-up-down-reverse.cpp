#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a;
    cin>>a;
    int c[a][a];
    int b = 1;

    for(int i = 0; i<a; i++){
        if(i%2 == 0){
            int b = 1;
                for(int j = 0; j<a; j++){
                c[j][i] = b;
                b += 1;
            }
        }
        else{
            b = a;
            for(int j = 0; j<a; j++){
                c[j][i] = b;
                b -= 1;
            }
        }
    }

    for(int i = 0; i<a; i++){
        for(int j = 0; j<a; j++){
            cout<<c[i][j];
        }
        cout<<"\n";
    }
    return 0;
}