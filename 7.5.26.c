# include <stdio.h>
# include <time.h>
# include <stdlib.h>

    void vnutorny_rozsah(float *p, int l, float *mxlmn, float *mnlmx){
	
	float n[l];
	
	for (int i = 1; i < l - 1; i++){
		
		if (n[i - 1] > n[i] && n[i] < n[i + 1])
		
		{
			printf("\nlokal min: %.2f", n[i]);
		}
		
		float *mxlmn[1];
		
		if (n[i] < *mxlmn[1])
		{
		    *mxlmn[1] = n[i];
		}
	       
	}	
	}
	
    int main()
	{
    	
    	int l = 17;
    	float n[l];
    	float mxlmn;
    	
    	
    	printf("Zadaj rozmier massivu od 4 po 17\n");
    	scanf("\n%d", &l);
    	
    	srand(time(NULL));
		
		for (int i = 0; i < l; i++){
		
		int cely = rand() % (1000) - 500;
		int drob = rand() % 1000;
		
		n[i] = (float)cely + (drob / 1000.0f);
		printf("%.2f ", n[i]);	
		
		
		}
		
			printf("\nlokal min: %.2f", mxlmn);
			
			
		return 0;  
	  	
	}
	
	
	
	