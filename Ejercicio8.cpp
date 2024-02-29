#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int x, y, count = 0;
	
	cout<<"Digite un numero de rango inicial: ";
	cin >> x;
	cout<<"Digite un numero de rango final: ";
	cin >> y;
	
	cout<<"Los divisores entre "<<x<<" y "<<y<<" son: "<<endl;
	for(int i = x; i <= y; i++){
		if((i % 3 == 0) && (i % 7 == 0)){
			cout<<i<<" ";
			count++;
		}
	}
	
	cout<<"\nLa cantidad de divisores son: "<<count;
	
	cout<<"\nPRESIONE UNA TECLA PARA SALIR";
	getch();
	
	
	return 0;
}
