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
		
		n[i] = (float)(rand()) * (17.0 + 4.0);
		printf("%.2f ", n[i]);	
		
		}  
			  	
	}
	