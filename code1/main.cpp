/*definition de la classe */
#include "classSET_CHAR.h"
classSET_CHAR::classSET_CHAR(){
	for(int i=0;i<N_CAR_MAX;i++)
		ens[i];
}
void classSET_CHAR::ajouter_element(unsigned char c){
	ens[c] = 1;
}
int classSET_CHAR::appartenance(unsigned char c){
	return ens[c];
}
int classSET_CHAR::cardinal(){
	int i,n;
	for(i=0,n=0; i<N_CAR_MAX; i++)
		if(ens[i])
			n++;
	return n;
}
/*utilisation de la classe classSET_CHAR*/
#include <cstring>
#include "classSET_CHAR.h"
#include <iostream>
using namespace std;
int main(){
	classSET_CHAR ens;
	char mot[81];
	cout<<"Dommez un mot ";
	cin>>mot;
	int i;
	for(i=0; i<strlen(mot); i++)
		ens.ajouter_element(mot[i]);
	cout<<"il contient "<<ens.cardinal()<<"caractere different "<<endl;
	if(ens.appartenance('e'))
		cout<<"le caracter 'e' est present\n";
	else
		cout<<"le caractere 'e' n'est pas present\n";
return 0;
}
