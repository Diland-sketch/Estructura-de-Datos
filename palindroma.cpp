#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

main(){
	string frase, fr;
	int i;
	cout << "ingrese la frase: ";
	cin >> frase;
	for(i=frase.size()-1; i>=0; i--){
		fr+=frase[i];
	}
	if(frase==fr){
		cout << "la frase es palindroma";
	}
	else{
		cout << "la frase no es palindroma";
	}
}
