#include <iostream>
using namespace std;
int main(){
	int n,i;
	cout<<"ingrese la cantidad de n naturales a imprimir"<<endl;
	cin>>n;
	i=1;
	cout<<"-------------------------"<<endl;
	cout<<"los numeros naturales son:"<<endl;
	while(i<=n){
		cout<<"numero: "<<i<<endl;
		i=i+1;
	}
	return 0;
}
