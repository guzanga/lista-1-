#include <iostream>

using namespace std;

 main(){
 	
 	setlocale (LC_ALL, "portuguese");
 	
 	float idade;
 	
 	cout<< "insira sua idade:";
 	cin>> idade;
 	
 	if(idade>=18 && idade <65){
 	cout<<"voce � um adulto";
 	
    }else if (idade >= 65 ){
    	cout<<"vc � idoso";
	}else{
		
	cout << "vc n um adulto ou idoso";
	}
	
}
 	
 	
