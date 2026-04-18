#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int m = INT_MAX;
    while(t--){
        int x;
        cin >> x;
        if(x==0){
            cout << 0 << endl;
            return 0;
        }
        m = min(abs(x), m);
    }
    cout << m << endl;
    return 0;
}