#include <iostream>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);

    int n,tot = 0;
    cin >> n;

    while(n--){
        int a;
        cin >> a;

        int cnt = 0;
        for(int i=1; i<=a/2; i++){
            if(a%i == 0){
                cnt++;
            }
        }
        if(cnt == 1){
            tot++;
        }
    }
    cout << tot;
}