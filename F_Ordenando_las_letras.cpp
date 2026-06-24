#include<bits/stdc++.h>
using namespace std;
int main(){
    char frase[101];
    cin.getline(frase,101);

    int largo = 0;
	while(frase[largo] != '\0'){
		largo++;
	}

    char letras[101];
	int cantletras = 0;

    for(int i=0; i<largo; i++){
		if(isalpha(frase[i])){
			letras[cantletras] = frase[i];
			cantletras++;
		}
	}

    for(int i=0; i<cantletras-1; i++){
		for(int j=0 ; j<cantletras-1 ; j++){
			if(letras[j]>letras[j+1]){
				// Intercambio 
				char aux = letras[j];
				letras[j] = letras[j+1];
				letras[j+1] = aux;
			}
		}
	}

    int posletras = 0; // Posicion actual del arreglo letras
	
	for(int i=0 ; i < largo ; i++){
		if(isalpha(frase[i])){
			frase[i] = letras[posletras];
			posletras++;
		}
	}
    
    return 0;
}