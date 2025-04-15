#include <iostream>
#include <string>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);

    string s;
    int n;

    cin >> s >> n;
    cout << s[n-1];

}