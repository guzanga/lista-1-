#include<iostream>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "portuguese");
	
	int num;
	
	cout << "escolha um numero inteiro: " << endl;
	cin >> num;
	
	cout<<"esses são os divisores de seus numeros:"<<num << endl;
	
	for(int i = 1; num >= i; i++ ){
		
		if(num % i == 0){
		
		cout <<i << " ";
		
		}
	
		
	}
	
	cout<< endl;
	
	return 0;
	
}
	
