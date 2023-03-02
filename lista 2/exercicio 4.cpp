#include <iostream>

using namespace std;

int main() {
	
    int num;
    int fator = 2;
    
    cout << "Digite um numero inteiro: ";
    cin >> num;


	while(num > 0){
	        if (num % fator == 0) {
            cout << fator << " ";
            num /= fator;
        } else {
            fator++;

            
        }
    }
}
