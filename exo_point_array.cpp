#include <iostream>
using namespace std;
int main(){
	int array[] = {1,7,3,4,5,6,7,8,9};
	cout<<"la taille de tableau est : "<<(sizeof(array))/4<<endl;
	//cout<<sizeof(int)<<endl;
	cout<<"nombre d'element augmente de 1"<<endl;
	cout<<*(array+1)+1<<endl;
	// *array+1 qui donne le contenu de array augmente de 1
	cout<<&array+1<<endl;
	//parcour du tableau
	int const NFOIS = (sizeof(array)/4);
	cout<<NFOIS<<endl;
	for(int i=0;i<=(sizeof(array))/4;i++)
		cout<<array[i]<<"\t";
	cout<<"autre maniere?\n\a";
return 0;
}
