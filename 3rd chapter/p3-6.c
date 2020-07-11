#include <stdio.h>

int main(void){
	double fenzi = 3.0e-23;
	float kuatuo = 950;
	float weight,kuatuo_h2o,num_h2o;
	printf("shuruzifu\n");
	scanf("%f",&weight);
	printf("%f\n",weight);
	kuatuo_h2o = weight * kuatuo;
	num_h2o = kuatuo_h2o / fenzi;
	printf("%f,\n",kuatuo_h2o);
	printf("%f\n%e\n",kuatuo_h2o,num_h2o);
	
	
	
/*	float mass_mol = 3.0e-23; /* mass of water molecule in grams */
 	float mass_qt = 950; /* mass of quart of water in grams */
/* 	float quarts;
 	float molecules;
 
 	printf("Enter the number of quarts of water: ");
 	scanf("%f", &quarts);
 	molecules = quarts * mass_qt / mass_mol;
 	printf("%f quarts of water contain %e molecules.\n", quarts, molecules);
*/	 
	return 0;
}
