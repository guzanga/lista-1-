#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int n;
	
	cout << "digite um n�mero: ";
	cin >> n;
	
	if(n > 0){
		cout << "positivo";
	}
	else if(n < 0){
		cout << "negativo";
	}	
	else{
		cout << "� zero mesmo :)";
	}
}

