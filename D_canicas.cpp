#include<bits/stdc++.h>
using namespace std;
    int Vasos[1000000] = {0};
int main(){
    int n,c;
    cin >> n >> c;
    for(int i = 0;i < c; i++){
        int conteo;
        cin >> conteo;
        Vasos[conteo]++;
    }
    for(int i = 1; i <= n; i++){
        cout << Vasos[i] << endl;
    }
    return 0;
}