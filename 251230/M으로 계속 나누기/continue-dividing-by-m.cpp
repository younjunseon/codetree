#include <iostream>

using namespace std;

int main() {
    int N, M;

    cin >> N;
    cin >> M;
    
    // Please write your code here.
    
    while(N>=M){
        cout<<N<<"\n";
        N = N/M;
    }
    cout<<N<<"\n";
    
    return 0;
}
