#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    int t, a;
    double sum;
    cin >> t;
    vector<double> vec;
    
    for(int i=0; i<t; i++){
        cin >> a;
        vec.push_back(a);
    }

    double max_value = *max_element(vec.begin(), vec.end());

    for(int i=0; i<vec.size(); i++){
        sum += vec[i] / max_value * 100;
    } 
    cout << sum/t;
}