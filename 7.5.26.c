# include <stdio.h>
# include <time.h>
# include <stdlib.h>

    void vnutorny_rozsah(float *n, int l, float *mxlmn, float *mnlmx, int *min, int *max){
    
    *min = 0;
    *max = 0;
    
	for (int i = 1; i < l - 1; i++)                          // zaciname analizu s 2 prvka masivu a konci predposlednym
	
	 {
		
		if (n[i - 1] > n[i] && n[i] < n[i + 1] )
		{
			
		mxlmn[*min] = n[i];                                 // mxlmn masiv ktory ulozuje pocet prvkov lok min
        (*min)++;                                           // citac v cykle
				
		}
		
    	if (n[i - 1] < n[i] && n[i] > n[i + 1] )
		{
			
		mnlmx[*max] = n[i]; 
        (*max)++;
				
		}
		
	 }
	       
	}	
	
    int main()
	{
    	
    	int l = 17;
    	float n[l], mxlmn[l], mnlmx[l];
    	int min = 0, max = 0;
    	
    	printf("Zadaj rozmier massivu od 4 po 17\n");
    	scanf("\n%d", &l);
    	
    	srand(time(NULL));
		
		for (int i = 0; i < l; i++){
		
		int cely = rand() % (1000) - 500;                      // zakladny a kladny cisla 
		int drob = rand() % 1000;                              // cisla po bodu
		
		n[i] = (float)cely + (drob / 1000.0f);                 // spojinie
		printf("%.2f ", n[i]);	
		
		
		}
		vnutorny_rozsah(n, l, &mxlmn, &mnlmx, &min, &max);
		
			for (int i = 0; i < min; i++)                      // vytup
			 {
               printf("\nlokal min: %.2f ", mxlmn[i]);
             }
             
			for (int i = 0; i < max; i++)
			 {
               printf("\nlokal max: %.2f ", mnlmx[i]);
             }
				
		return 0;  
	  	
	}
	
	
	
	