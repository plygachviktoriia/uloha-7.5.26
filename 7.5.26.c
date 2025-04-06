# include <stdio.h>
# include <time.h>
# include <stdlib.h>

    void vnutorny_rozsah(float *n, int l, float *mxlmn, float *mnlmx, int *min){
    
    *min = 0;
    
	for (int i = 1; i < l - 1; i++){
		
		if (n[i - 1] > n[i] && n[i] < n[i + 1] )
		{
		mxlmn[*min] = n[i]; 
		
        (*min)++;		
		}
	
		
		}
	       
	}	
	
    int main()
	{
    	
    	int l = 17;
    	float n[l];
    	float mxlmn[l];
    	float mnlmx[l];
    	int min = 0;
    	
    	printf("Zadaj rozmier massivu od 4 po 17\n");
    	scanf("\n%d", &l);
    	
    	srand(time(NULL));
		
		for (int i = 0; i < l; i++){
		
		int cely = rand() % (1000) - 500;
		int drob = rand() % 1000;
		
		n[i] = (float)cely + (drob / 1000.0f);
		printf("%.2f ", n[i]);	
		
		
		}
		vnutorny_rozsah(n, l, &mxlmn, &mnlmx, &min);
		
			for (int i = 0; i < min; i++)
			 {
               printf("\nlokal min: %.2f ", mxlmn[i]);
             }
             
			printf("\nlokal max: %.2f", mnlmx);
			
			
		return 0;  
	  	
	}
	
	
	
	