#include <iostream>
using namespace std;
int main(){
	//creation d'une variable dynamic qui croi tt le temps
/*	int *var;
	var = new int;
	cout<<"saisir une valeur"<<"\n";
	cin>>*var;
	system("clear");
	cout<<"la valeur est: "<<*var<<" qui a pour adresse: "<<var<<endl;
	delete var;
	cout<<"valeur: "<<*var<<" adresse : "<<var<<endl;
*/
	int i=1;
	int *memory = new int[i];
	cout<<"saisir une valeur\n";
	cin>>*memory;
	for(i=1;i<=5;i++){
		cout<<"saisir une valeur"<<endl;
		cin>>*(memory+i);
	}
	system("clear");
	for(i=0;i<=5;i++)
		cout<<*(memory+i)<<"\t";
	cout<<endl;
	cout<<"vous pouvez encore ajouter un autre element"<<endl;
//	memory = new int [6];
	cin>>*(memory+6);
	for(i=0;i<=6;i++)
		cout<<*(memory+i)<<endl;
	cout<<endl;
	delete memory;
return 0;
}
