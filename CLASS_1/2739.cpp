#include <iostream>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);

    int n;
    cin >> n;
    for(int i=1; i<10; i++){
        cout << n << " * " << i << " = " << n*i << '\n';
    }
}