#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	
	int n, numAleatorio;
	
	srand(time(NULL)); //numero aleatorio
	numAleatorio = 1 + rand() % (100);
	
	cout<<"Adivina el numero entre 1 y 100: ";
	
	while(true){
		cin>>n;
		
		if(n == numAleatorio){
			cout<<"Congratulations, adivinaste el numero";
			break;
		}else if(n < numAleatorio){
			cout<<"El numero es mayor, intenta de nuevo: ";
		}else{
			cout<<"El numero es menor, intenta de nuevo: ";
		}
	}
	
	return 0;
}
