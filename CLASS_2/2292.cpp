#include <iostream>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);

    int n, sum = 1;
    cin >> n;
    if(n==1){
        cout << 1;
        return 0;
    }
    for(int i=1; i<n; i++){
        sum += i*6;
        if(n <= sum){
            cout << i+1;
            return 0;
        }
    }
}