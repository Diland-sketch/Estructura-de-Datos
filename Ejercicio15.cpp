#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	char frase[20];
	int i, count = 0, z;
	
	cout<<"Escribe una frase cualquiera: ";
	gets(frase);
	 
	cout<<"Cantidad de caracteres: ";
	for(i = 0; i < frase[i]; i++){
		count++;
	}
	cout<<count<<endl;
	
	for(z = 0; z < frase[z]; z++){
		frase[z] = toupper(frase[z]);
		cout<<frase[z];
	}
	
	return 0;
}
