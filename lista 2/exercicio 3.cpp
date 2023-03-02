#include<iostream>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "portuguese");
	
	int num;
	
	cout << "insira um numero: ";
	cin >> num ;
	
	cout << "esses são os numeros primos menores que seu numero"<<num<< endl;

	for(int i = 2; i <= num; i++ ){
	
		bool primo = true;
		
		for( int j = 2; j < i; j++) {
	    if (i % j == 0) {
	    	primo = false;
	        break;
	       
			}
	
		} 
		if (primo){
		cout << i <<endl;	
	}

}

}
