#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    
    vector<int> vec;
    int num, target;

    for(int i=0; i<10; i++){
        cin >> num;
        target = num % 42;
        if(find(vec.begin(), vec.end(), target) == vec.end()){
            vec.push_back(target);
        }
    }
    cout << vec.size();
}