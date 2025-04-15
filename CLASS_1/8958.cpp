#include <iostream>
#include <string>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int tot = 0;
        int cur = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'O'){
                cur += 1;
                tot += cur;
            }
            else{
                cur = 0;
                tot += cur;
            }
        }
        cout << tot << '\n';
    }
}