#include <iostream>
using namespace std;
int main(){
	int *var,w,ww;
	var = &w;
	int* varr= &ww;
	cout<<"var est un pointeur qui pointe sur l'@ de w"<<endl;
	cout<<var<<" est l,adresse de w"<<endl;
	cout<<"saisir une valeur pour w"<<endl;
 	cin>>w;
	cout<<w<<"est la valeur de w et de *var"<<endl;
	cin>>(*varr);
	cout<<"*varr aura la meme valeur que ww c,est a dire "<<ww<<endl;
return 0;
}
