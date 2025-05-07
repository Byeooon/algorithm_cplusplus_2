#include <iostream>
#include <vector>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);

    int n, m, card;
    cin >> n >> m;

    int tmpSum,maxSum = -1;

    vector<int> vec;

    for(int i=0; i<n; i++){
        cin >> card;
        vec.push_back(card);
    }

    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                tmpSum = vec[i]+vec[j]+vec[k];
                if(tmpSum <= m and tmpSum > maxSum){
                    maxSum = tmpSum;
                }
            }
        }
    }
    cout << maxSum;
}