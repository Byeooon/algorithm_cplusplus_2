#include <iostream>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);

    int n;
    cin >> n;

    long long min = 1000001;
    long long max = -1000001;

    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        if(num > max){
            max = num;
        }
        if(num < min){
            min = num;
        }
    }
    cout << min << " " << max << '\n';
}