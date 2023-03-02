#include<iostream>

using namespace std;

int main(){
	
	
	int num, soma=0, dig;
	
	setlocale (LC_ALL, "portuguese");
	
	cout << "insira um numero inteiro: " << endl;
	cin >> num;
	
	while (num > 0){
		
		dig = num % 10;
        soma += dig;
        num /= 10;	
		
	}
	
	cout << "essa é a soma dos digitos do numero inserido: " << soma;
	return 0;
	
}
