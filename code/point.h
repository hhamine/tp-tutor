#ifndef POINT1_H
#define POINT1_H
class classPOINT{
	private:
		float x,y; //lorsque on ne dit rien, en C++ l'attribut est private
	public:
		classPOINT(float, float);
		void deplacer(float, float);
		void afficher();
};
#endif
