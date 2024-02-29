#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int n;
	
	cout<<"Digite un numero: ";
	cin>>n;
	
	for(int i = 1; i <= 10; i++){
		cout<<n<<" x "<<i<<" = "<<n * i<<endl;
	}
	
	cout<<"\nPRESIONE UNA TECLA PARA SALIR";
	getch();	


	return 0;
}
