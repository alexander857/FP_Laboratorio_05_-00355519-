#include<iostream>
using namespace std;

int main(){
	int total;
	cout<<"Ingrese el total de datos"<<endl;
	cin>>total;
	float num, suma = 0;
	for(int i=0;i<total;i++){
		
		cout<<"Ingrese el dato "<<i+1<<" : "<<endl;
		cin>>num;
		suma += num;
		
	}
	cout<<"La media aritmetica es: "<<suma/total<<endl;
	system("pause");
	
	
	
	
	
	
	
	
	
	return 0;
}
