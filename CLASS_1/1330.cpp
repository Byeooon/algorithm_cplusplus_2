#include <iostream>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);

    int a, b;

    cin >> a >> b;
    
    if(a > b){
        cout << '>';
    }
    else if(a < b){
        cout << '<';
    }
    else{
        cout << "==";
    }
}