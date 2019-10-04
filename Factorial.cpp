#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int n, i = 1, factorial = 1;
	cout<<"Ingrese el numero"<<endl;
	cin>>n;
	
	while(i <= n){
		factorial *= i;
		i ++ ;
	}
			cout<<"El factorial es: "<<factorial<<endl;	
			return 0;
}
