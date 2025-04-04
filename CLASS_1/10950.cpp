#include <iostream>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;

        cout << a + b << '\n';
    }
}