#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int n, i, acum = 0;
	
	cout<<"Digite un numero: ";
	cin>> n;
	
	for(int i = 1; i < n; i++){
	if(n % i == 0){
		cout<<i<<" ";
		acum = acum + i;
		}
	}
	
	if(acum == n){
		cout<<"\nSu numero es perfecto";
	}else{
		cout<<"Su numero no es perfecto";
	}
	
	cout<<"\nPRESIONE UNA TECLA PARA SALIR";
	getch();
	
	return 0;
}
