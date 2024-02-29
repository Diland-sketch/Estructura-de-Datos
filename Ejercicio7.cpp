#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int n, count = 0;
	
	cout<<"Digite el numero para hallar sus divisores: ";
	cin>> n;
	
	cout<<"Divisores de "<<n<<": "<<endl;
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			cout<<i<<" ";
			count++;
		}
	}
	
	cout<<"\nLos divisores en total de "<<n<<" es de: "<<count;
	
	cout<<"\nPRESIONE UNA TECLA PARA SALIR";
	getch();
	
	return 0;
}
