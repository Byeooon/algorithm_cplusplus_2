#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);

    int a, b, c, d, e, sum;

    cin >> a >> b >> c >> d >> e;

    sum = pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2) + pow(e, 2);
    cout << sum%10;
}