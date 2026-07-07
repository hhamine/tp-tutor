#include <iostream>
using namespace std;
int main(){
	int func(int);
	int v,p;
	cout<<"hello insert the 1st value"<<endl;
	cin>v;
	p = func(v);
	cout<<"v = "<<v<<" and p = "<<p<<endl;
	return 0;
}
int func(int n){
	return 2*n;
}
