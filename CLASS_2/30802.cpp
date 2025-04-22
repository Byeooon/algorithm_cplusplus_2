#include <iostream>
#include <vector>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);

    int t, n, tc, pc;
    int ft = 0; 
    cin >> t;

    vector<int> t_size;
    for(int i=0; i<6; i++){
        cin >> n;
        t_size.push_back(n);
    }
    cin >> tc >> pc;
    for(int i=0; i<6; i++){
        if(t_size[i]%tc!=0){
            ft += t_size[i]/tc+1;
        }
        else{
            ft += t_size[i]/tc;
        }
    }
    cout << ft << '\n';
    cout << t/pc << ' ' << t%pc;
}