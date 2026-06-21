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

    return 0;
}