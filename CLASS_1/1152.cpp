#include <iostream>
#include <string>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);

    string s;
    getline(cin, s);
    int cnt = 0;
    bool flag = true;
    for(int i=0; i<s.size(); i++){
        if(s[i] != ' ' and flag){
            cnt += 1;
            flag = false;
        }
        else if(s[i] == ' ') {
            flag = true;
        }
    }
    cout << cnt;    
}