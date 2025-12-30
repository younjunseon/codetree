#include <iostream>

using namespace std;

int main() {
    int N, M;

    cin >> N;
    cin >> M;
    cout<<N<<"\n";
    
    // Please write your code here.
    while(N>M){
        N = N/M;
        cout<<N<<"\n";
    }
    
    return 0;
}
