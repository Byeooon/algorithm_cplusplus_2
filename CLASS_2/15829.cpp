#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    long long n,sum = 0;
    long long power = 1;
    string s;
    int MOD = 1234567891;
    cin >> n >> s;

    for(int i=0; i<n; i++){
        sum = (sum + ((s[i]-'a'+1)*power)%MOD)%MOD;
        power = (power*31)%MOD;
    }
    cout << sum;
}