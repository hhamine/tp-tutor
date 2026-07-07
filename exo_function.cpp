#include <iostream>
using namespace std;
int main(){
	int fib_(int value);
	cout<<"saisir une valeur entiere positive"<<endl;
	int val;
	cin>>val;
	cout<<"apres application de la fonction fibbonanci on obtient: "<<fib_(val)<<endl;
return 0;
}
int fib_(int value){
	if(value==0||value==1)
		return 1;
	else
		return (value-1)+fib_(value-2);
}

