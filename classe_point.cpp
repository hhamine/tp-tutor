#include <iostream>
#include <cmath>
using namespace std;
class classPOINT{
	public:
		int x;
		int y;
	public:
		void init(int, int);
		void afficher();
		int modul(int , int);
};
void classPOINT::init(int abs,int ord){
	x=abs;
	y=ord;
};
void classPOINT::afficher(){
	cout<<"le point a pour abscisse: "<<x<<" et pour ordonnee: "<<y<<endl;
};
int classPOINT::modul(int abs,int ord){
	x = abs;
	y = ord;
	x*=x;
	y*=y;
	x = x + y;
	return sqrt(x);
};
int main(/*int argv, char* []argc*/){
	classPOINT point;
	int x,y;
	cout<<"bonjour veuiller initialiser le point"<<endl;
        cin>>x;		cout<<endl;
	cin>>y;		cout<<endl;
	point.init(x,y);
	cout<<"l,abscisse est : "<<point.x<<" et l,ordonne est: "<<point.y<<endl;
return 0;       
}
