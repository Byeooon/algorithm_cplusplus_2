#include <iostream>
#include <string>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        int sum = 0;
        string tmp;
        sum += i;
        tmp = to_string(i);
        for(int j=0; j<tmp.length(); j++){
            sum += tmp[j]-'0';
        }
        if(sum == n){
            cout << i;
            return 0;
        }
    }
    cout << 0;
}