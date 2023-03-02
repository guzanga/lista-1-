#include <iostream>

using namespace std;

 main(){
 	
 	setlocale (LC_ALL, "portuguese");
 	
 	int num, quant;
 	int result;
 	int i;
 	
 	
 	cout <<"informe um numero em que deseja aplicafar uma tabuada";
 	cin >> num;
 	cout<< "informe a quantidade:";
 	cin >> quant;
 	
 	for(int i= 0; i <=quant; i++){
	 cout <<num << " X " << i << " = " << num * i << endl;
	 }
 	
 	
 }
 	
 	
