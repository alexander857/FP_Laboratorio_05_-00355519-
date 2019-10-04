#include <iostream>
#include <stdlib.h>
using namespace std;

 float FuncionSuma(){
 	int n1, n2, suma;
 	cout<<"Ingrese dos numeros"<<endl;
		cin>>n1;
		cin>>n2;
		suma = n1 + n2;
		cout<<"LA SUMA ES: "<<suma<<endl; 	
 }
 
 float FuncionResta(){
 	int n1, n2, resta;
 	cout<<"Ingrese dos numeros"<<endl;
		cin>>n1;
		cin>>n2;
		resta = n1 - n2;
		cout<<"LA RESTA ES: "<<resta<<endl;
 }
 
 float FuncionMultiplicacion(){
 	int n1, n2, producto;
 	cout<<"Ingrese dos numeros"<<endl;
		cin>>n1;
		cin>>n2;
		producto = n1 * n2;
		cout<<"EL PRODUCTO ES: "<<producto<<endl;
 }
 
 float FuncionDivision(){
 	int n1, n2, division;
 	cout<<"Ingrese dos numeros"<<endl;
		cin>>n1;
		cin>>n2;
		division = n1 / n2;
		cout<<"LA DIVISION ES: "<<division<<endl;
 }
 
 float FuncionFibonacci(){
 	int n, num=1, ant=0, num2;
	cout<<"Ingrese un numero"<<endl;
	cin>>n;
	if(n==0){
		cout<<"FIBONACCI "<<n<<endl;
	}
	else{
	
	for(int i=0;i<=n;i++){
	num2 = num;
	num += ant;
	ant = num2;	
		
	printf("%d, ", ant);
		
	 }
   }
 }
 
 float FuncionFactorial(){
 	int n, i = 1, factorial = 1;
	cout<<"Ingrese el numero"<<endl;
	cin>>n;
	
	while(i <= n){
		factorial *= i;
		i ++ ;
	}
			cout<<"EL FACTORIAL ES: "<<factorial<<endl;	
 }


int main(){
	int n;

while(n!=7){
	cout<<"Ingrese una opcion"<<endl;
	cout<<" #1 Suma de dos numeros. \n #2 Resta de dos numeros. \n #3 Multiplicacion de dos numeros. \n"
	" #4 Division de dos numeros. \n #5 Fibonacci de un numero. \n #6 Factorial de un numero. \n #7 Salir."<<endl;
	cout<<"Opcion: "; cin>>n;
	
	
	switch(n){
		case 1: 
		FuncionSuma();
		break;
		case 2: 
		FuncionResta();
		break;
		case 3: 
		FuncionMultiplicacion();
		break;
		case 4: 
		FuncionDivision();
		break;
		case 5: 
		FuncionFibonacci();
		break;
		case 6: 
		FuncionFactorial();
		break;
		case 7: 
		cout<<"HASTA LUEGO"<<endl;
		break;
		default: 
		cout<<"EL NUMERO NO ESTA EN LA LISTA"<<endl;
		break;
	}
	
}

	

	return 0;
}
