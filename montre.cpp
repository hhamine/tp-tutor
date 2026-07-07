#include <iostream>
using namespace std;
class classMONTRE{
	public:
		short int heure;
		short int minute;
	public:
		classMONTRE(short int h, short int m){
			heure = h;
			minute = m;
		}
		void avancer_heure(short int av){
			if(av<=59||av>=0){
				mimute+=av;
				if(minute>=60){
					heure+=1;
					this.minute%=60;
				}
			}
			else
				if(av<0)
					continue;
				else
					if(av>=60){
						int var;
						var = av%60;
					        while(av%60>60)
						{
							heure+=1;
							av%=60;
						}
						this.minute+=av;
					}

		}
		void afficher_heure(){
			cout<<heure<<"h"<<minute<<"minute(s)"<<endl;
		}
}
