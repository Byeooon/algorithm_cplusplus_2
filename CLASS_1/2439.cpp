#include <iostream>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = n-i-2; j >= 0; j--){
            cout << " ";
        }
        for(int k=0; k<=i; k++){
            cout << "*";
        }
        cout << '\n';
    }
}