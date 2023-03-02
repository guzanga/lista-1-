#include <iostream>

using namespace std;

float soma(float a, float b){
	return a + b;
}
float divisao(float a, float b){
	return a / b;
}
float subtracao(float a, float b){
	return a - b;
}
float multiplicacao (float a, float b){
	return a * b;
}

 main(){
 	
	 	setlocale (LC_ALL, "portuguese");
	 	
	 	float numero, numero2;
	 	int op;
	 	
	 	cout<< "informe o primeiro numero "<<endl;
	 	cin >> numero;
	 	cout<< "informe o numero 2 "<<endl;
 		cin >> numero2;
 		cout <<"1-soma"<<endl;
		cout <<"2-subtração"<<endl;
		cout <<"3-multiplicação"<<endl;
		cout <<"4-divisão"<<endl;
		cout <<"5-sair"<<endl;
		
		cin >>op;
		
		
		switch(op){
		
		
		case 1:cout << soma(numero, numero2)<<endl;
		break;
		case 2:cout << subtracao(numero,numero2)<<endl;
		break;
		case 3:cout << multiplicacao(numero, numero2)<<endl;
		break;
		case 5:cout <<"sair"<<endl;
		break;
		case 4: cout<< divisao(numero, numero2) <<endl;
		break;
		default: cout <<"não exite"<<endl;
		
 	
 }while(op !=5);
 
}
