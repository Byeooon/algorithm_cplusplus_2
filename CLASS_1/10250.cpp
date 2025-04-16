#include <iostream>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);

    int t;
    cin >> t;

    while (t--){
        int a, b, c, floor, room;
        cin >> a >> b >> c;

        floor = c%a;
        room = c/a+1;
        if(floor == 0){
            cout << 100*a + room-1 << '\n';
        }
        else{
            cout << 100*floor + room << '\n';
        }
    }
}