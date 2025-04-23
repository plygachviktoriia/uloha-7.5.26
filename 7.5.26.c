#include <stdio.h>
#include <time.h>
#include <stdlib.h>

    void vnutorny_rozsah(float *p, int l, float *mxlmn, float *mnlmx)
	{
	for (int i = 1; i < l - 1; i++)                          // zaciname analizu s 2 prvka masivu a konci predposlednym
	{
	  if (p[i - 1] > p[i] && p[i] < p[i + 1] )
	  {
		     if (p[i] > p[i+1])
		     {
		     	*mxlmn = p[i];
		     	p[i]++;
			 }
	  }                                                                
	 
      if (p[i - 1] < p[i] && p[i] > p[i + 1] )
      {
	  
	      if (p[i] <  p[i+1])
		     {
		     	*mnlmx = p[i];
		     	*mnlmx++;
			 }
	  }       
	}	
	
    int main()
	{
    	int l = 17;
    	float n[l], mxlmn, mnlmx;
    	
    	printf("Zadaj rozmier massivu od 4 po 17\n");
    	scanf("\n%d", &l);
    	
    	srand(time(NULL));
		
		for (int i = 0; i < l; i++)
		{
		int cely = rand() % 1001 - 500;                      // zaporny a kladny cisla 
		int drob = rand() % 1000;                              // cisla po bodu
		
		n[i] = cely + drob / 1000.0f;                 // spojinie
		printf("%.2f ", n[i]);	
		}
		vnutorny_rozsah(n, l, &mxlmn, &mnlmx);
	
               printf("\nnajvacsi lokal min: %.2f ", mxlmn);
               
               printf("\nnajmensi lokal max: %.2f ", mnlmx);
           	
		return 0;  
	}
	
	
	
	