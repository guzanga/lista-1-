#include <iostream>
using namespace std;

int main() {
	setlocale (LC_ALL, "portuguese");
	
    int n;
    
    cout << "Digite um numero inteiro: ";
    cin >> n;
    
    cout << "O numero " << n << " em binario e: ";
    
    for (int i = 31; i >= 0; i--) {
        cout << ((n >> i) & 1);
    }
    
    return 0;
}
