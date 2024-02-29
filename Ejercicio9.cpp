#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int n;
	
	cout<<"Digite un numero: ";
	cin >> n;
	
	if(n % 2 == 1){
		cout<<"Su numero ingresado es primo";
	}else{
		cout<<"Su caga de numero no es primo";
	}
	
	cout<<"\nPRESIONE UNA TECLA PARA SALIR";
	getch();
	
	return 0;
}
