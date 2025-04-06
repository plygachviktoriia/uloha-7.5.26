# include <stdio.h>
# include <time.h>
# include <stdlib.h>

    
    int main()
	{
    	
    	int l = 17;
    	float n[l];
    	
    	printf("Zadaj rozmier massivu od 4 po 17\n");
    	scanf("\n%d", &l);
    	
    	srand(time(NULL));
		
		for (int i = 0; i < l; i++){
		
		int cely = rand() % (1000) - 500;
		int drob = rand() % 1000;
		
		n[i] = (float)cely + (drob / 1000.0f);
		printf("%.2f ", n[i]);	
		
		}
		
		return 0;  
	  	
	}
	
	void vnutorny_rozsah(float *p, int l, float *mxlmn, float *mnlmx){
	
	if (int i = 1; i < l - 2; i++){
	       
	}	
	}
	
	