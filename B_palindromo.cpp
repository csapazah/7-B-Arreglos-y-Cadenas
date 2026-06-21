#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        char palabra[50];
        cin >> palabra;

        int p_largo = 0;
        while (palabra[p_largo] != '\0'){
            p_largo++;
        }
        int inicio = 0;
        int fin = largo - 1;
        bool esPalindromo = true;

        while (inicio < fin){
            if(palabra[inicio] != palabra[fin]){
                esPalindromo = false;
            }
            inicio++;
            fin--;
        }
    }
    return 0;
}