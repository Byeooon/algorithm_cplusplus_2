#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);

    string s;
    cin >> s;

    map<char, int> alpha;

    for(char c='a'; c<='z'; c++){
        alpha[c] = -1;
    }
    
    for(int i=0; i<s.length(); i++){
        if(alpha[s[i]] == -1){
            alpha[s[i]] = i;
        }
    }
    for(char c='a'; c<='z'; c++){
        cout << alpha[c] << " ";
    }
}