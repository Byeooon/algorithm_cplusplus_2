#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);

    while(true){
        string n;
        bool flag = false;
        cin >> n;
        if(n=="0"){
            return 0;
        }
        else if(n.size()==1){
            cout << "yes" << "\n";
            continue;         
        }
        else{
            for(int i=0; i<n.size()/2;i++){
                if(n[i] == n[n.size()-i-1]){
                    flag = true;
                }
                else{
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            cout << "yes" << '\n';
        }
        else{
            cout << "no" << '\n';
        }
    }
}