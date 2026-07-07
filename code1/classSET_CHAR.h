#ifndef classSET_CHAR
#define classSET_CHAR
#define N_CAR_MAX 256	 //ON POURAI L,UTILISER DANS <limit.h>
class classSET_CHAR{
	unsigned char ens[N_CAR_MAX];
	public:
		classSET_CHAR();	//le constructeur peut ne rient contenir en argument
		void ajouter_element(unsigned char);
		int appartenance(unsigned char);
		int cardinal();
};
#endif
