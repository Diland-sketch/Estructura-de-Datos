#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int n, i;
	
	cout<<"Digite un numero como rango: ";
	cin >> n;
	
	for(i = 0; i <= n; i++){
		cout<<i<<" ";
	}
	
	cout<<"\nPRESIONE UNA TECLA PARA SALIR";
	getch();	
	
	
	return 0;
}
