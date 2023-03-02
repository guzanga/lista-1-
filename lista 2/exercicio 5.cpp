#include<iostream>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "portuguese");
	
    int num, fat = 1;
    
    cout << "Digite um numero inteiro: " <<endl;
    cin >> num;
     for(int i = 2; i <= num ; i++){
     	fat *= i;
	 }
	 
	cout << "aqui esta o fatorial do seu numero:" << fat;
	return 0;
}

