#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int n;
	
	cout<<"Digite el numero para hallar sus divisores: ";
	cin>> n;
	
	cout<<"Divisores de "<<n<<": "<<endl;
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			cout<<i<<" ";
		}
	}
	
	cout<<"\nPRESIONE UNA TECLA PARA SALIR";
	getch();
	
	return 0;
}
