#include "point.h"
#include <iostream>
using namespace std;
classPOINT::classPOINT(float abs,float ord){
	x = abs;
	y = ord;
};
void classPOINT::deplacer(float dx,float dy){
	x+=dx;
	y+=dy;
};
void classPOINT::afficher(){
	cout<<"abscisse: "<<x<<" ordonnee: "<<y<<endl;
};
int main(){
	classPOINT point(5.754,3.1458);
	point.deplacer(7.5,0.154785);
	point.afficher();
return 0;
}
