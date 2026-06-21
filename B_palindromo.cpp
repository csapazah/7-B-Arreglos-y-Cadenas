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
        int fin = p_largo - 1;
        bool esPalindromo = true;

        while (inicio < fin){
            if(palabra[inicio] != palabra[fin]){
                esPalindromo = false;
            }
            inicio++;
            fin--;
        }
        esPalindromo? cout << "P" << endl :cout << "NP" << endl;
    }
    return 0;
}