#include<bits/stdc++.h>
using namespace std;
int main(){
    int frec[101] = {0};
    int p,n;
    cin >> p >> n;
    for(int i = 0; i < n; i++){
        int f;
        cin >> f;
        frec[f]++;
    }
    for(int i = 1; i<=p;i++){
        cout << i << "-" << frec[i] << endl;
    }

    return 0;
}