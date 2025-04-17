#include <iostream>
#include <vector>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    int num;
    vector<int> vec;
    for(int i=0; i<8; i++){
        cin >> num;
        vec.push_back(num);
    }
    for(int i=1; i<8; i++){
        if(vec[0]==1){
            if(vec[i]-vec[i-1] == 1){
                if(i==7){
                    cout<< "ascending";
                }
            }
            else{
                cout << "mixed";
                break;
            }
        }
        else if(vec[0]==8){
            if(vec[i]-vec[i-1] == -1){
                if(i==7){
                    cout<< "descending";
                }
            }
            else{
                cout << "mixed";
                break;
            }
        }
        else{
            cout << "mixed";
            break;
        }
    }
}