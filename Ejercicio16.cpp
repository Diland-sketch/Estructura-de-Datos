#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	char frase[100];
	int i, z, countEspacios = 0, countNum = 0;
	
	cout<<"Escriba una frase cualquiera: ";
	gets(frase);
	
	cout<<"La cantidad de caracteres es de: "<<endl;
	for(i = 0; i < frase[i]; i++){
	}
	cout<<i<<endl;
	
	cout<<"Letra por letra y las dos primeras mayusculas: "<<endl;
	for(z = 0; z < frase[z]; z++){
		if(z < 2){
			frase[z] = toupper(frase[z]);
		}else{
			frase[z] = tolower(frase[z]);
		}
		cout<<frase[z]<<" ";
	}
	
	cout<<"\nNumeros en la frase: "<<endl;
	for(int y = 0; y < frase[y]; y++){
		if(isdigit(frase[y])){
			cout<<frase[y];
			countNum++;
		}
	}
	cout<<"\nCantidad de numeros en la frase: "<<endl<<countNum<<endl;
	
	cout<<"Cantidad de espacios es de: "<<endl;
	for(int k = 0; k < frase[k]; k++){
		if(frase[k] == ' '){
			countEspacios++;
		}
	}
	cout<<countEspacios;
	
	
	return 0;
}
