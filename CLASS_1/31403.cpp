#include <iostream>
#include <string>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);

    string a, b, c;
    cin >> a >> b >> c;

    cout << stoi(a)+stoi(b)-stoi(c) << '\n';
    cout << stoi(a+b)-stoi(c) << '\n';
}