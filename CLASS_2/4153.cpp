#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    int a, b, c;
    while(true){
        cin >> a >> b >> c;
        vector<int> vec;
        if (a+b+c == 0)
            break;

        vec.push_back(a);
        vec.push_back(b);
        vec.push_back(c);
        
        sort(vec.begin(), vec.end());

        if(pow(vec[0],2) + pow(vec[1],2) == pow(vec[2],2))
            cout << "right" << '\n';
        else
            cout << "wrong" << '\n';
    }
}