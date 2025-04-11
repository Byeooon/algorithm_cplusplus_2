#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);

    string s;
    int a, b, c;

    cin >> a >> b >> c;
    
    s = to_string(a*b*c);
    map<int,int> myMap;

    for(int i=0; i<=9; i++){
        myMap[i] = 0;
    }

    for(int j=0; j<s.length(); j++){
        myMap[s[j]-'0'] += 1;
    }

    for(int k=0; k<10; k++){
        cout << myMap[k] << " ";
    }
    
}