#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int x, y;
	
	cout<<"Digite un numero de rango inicial: ";
	cin >> x;
	cout<<"Digite un numero de rango final: ";
	cin >> y;
	
	if(x % 2 != 0){
		x++;
	}
	
	for(int i = x; i <= y; i+=2){
		cout<<i<<" ";
	}
	
	cout<<"\nPRESIONE UNA TECLA PARA SALIR";
	getch();	
	
	return 0;
}
