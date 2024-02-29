#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int factorial = 1, n;
	
	cout<<"Digite un numero para calcular su factorial: ";
	cin>> n;
	
	if(n < 0){
		cout<<"Ingrese un numero mayor a 0";
	}else{
		for(int i = 1; i <= n; i++){
			factorial = factorial * i;
		}
	}
	
	cout<<"Factorial de "<<n<<" es: "<<factorial;
	
	cout<<"\nPRESIONE UNA TECLA PARA SALIR";
	getch();	
	
	return 0;
}
