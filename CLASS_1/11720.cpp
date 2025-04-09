#include <iostream>
#include <string>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    int n, sum = 0;
    string num;
    cin >> n >> num;

    for(int i=0; i<n; i++){
        sum += num[i]-'0';
    }
    cout << sum;
}