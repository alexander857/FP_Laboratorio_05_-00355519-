#include<iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int n, num=1, ant=0, num2;
	cout<<"Ingrese un numero"<<endl;
	cin>>n;
	if(n==0){
		cout<<"Fibonacci "<<n<<endl;
	}
	else{
	
	for(int i=0;i<=n;i++){
	num2 = num;
	num += ant;
	ant = num2;	
		
	printf("%d, ", ant);	
		
	}
}
	
	
	
	
	
	
	
	return 0;
}
