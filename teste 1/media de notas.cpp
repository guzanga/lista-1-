#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	float nota1, nota2, nota3, result;
	
	cout <<"informe a primeira nota:"<<endl;
	cin >> nota1;
	
	cout <<"informe a segunda nota:"<<endl;
	cin >> nota2;
	
	cout << "informe a terceira nota:"<<endl;
	cin >>nota3;
	
	result = (nota1+nota2+nota3) / 3;
	
	cout << "sua nota foi de : " <<result << "\n\n\n\n\n";
	
   if(result > 7){
   	cout <<"parabens vc passou"<<endl;
   	
   }else if(result > 5 &&  result <= 6.9){
   	
   	cout <<"recuperação";
   
   
   }else{
   	
   	cout<<"reprovado";
   }
    
}
