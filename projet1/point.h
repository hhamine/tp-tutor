#include <cmath>
class classPOINT{
	private:
		int x = 0;
		int y = 0;
	public:
		int getX(){
		return x;
		}
		int getY(){
		return y;
		}
		void setX(int newX){
			x = newX;
		}
		void setY(int newY){
			x = newY;
		}
		void afficher(){
			cout<<"abscisse: "<<getX()<<endl<<"ordonnee: "<<getY()<<endl;
		}
		int distance(){
			int distance;
			x*=x*x;
			y*=y*y;
			distance = x+y;
		return sqrt(distance);
		}

}
