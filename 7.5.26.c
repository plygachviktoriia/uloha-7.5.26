# include <stdio.h>
# include <time.h>
# include <stdlib.h>

    void vnutorny_rozsah(float *n, int l, float *mxlmn, float *mnlmx){
	
    *mxlmn = n[0];
    *mnlmx = n[0];
    
	for (int i = 1; i < l - 1; i++){
		
		if (n[i - 1] > n[i] && n[i] < n[i + 1] && n[i] < *mxlmn)
		
		{
			 *mxlmn = n[i];
		}
		
		if (n[i - 1] < n[i] && n[i] > n[i + 1] && n[i] > *mnlmx)
		{
			*mnlmx = n[i];
		}
		
		}
	       
	}	
	
    int main()
	{
    	
    	int l = 17;
    	float n[l];
    	float mxlmn;
    	float mnlmx;
    	
    	printf("Zadaj rozmier massivu od 4 po 17\n");
    	scanf("\n%d", &l);
    	
    	srand(time(NULL));
		
		for (int i = 0; i < l; i++){
		
		int cely = rand() % (1000) - 500;
		int drob = rand() % 1000;
		
		n[i] = (float)cely + (drob / 1000.0f);
		printf("%.2f ", n[i]);	
		
		
		}
		vnutorny_rozsah(n, l, &mxlmn, &mnlmx);
		
			printf("\nlokal min: %.2f", mxlmn);
			printf("\nlokal max: %.2f", mnlmx);
			
			
		return 0;  
	  	
	}
	
	
	
	