#include <iostream>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    int max = -1;
    int index;
    for(int i=0; i<9; i++){
        int n;
        cin >> n;

        if(n > max){
            max = n;
            index = i;
        }
    }
    cout << max << '\n';
    cout << index+1 << '\n';
}