#include <stdio.h>
#include <time.h>
  int main(void){
  	clock_t start_t, end_t;
	  register int x, y;
	  
	  start_t = clock();
	  for(x=0; x<2000000; x++){
	  	for(y=0; y<100; y++){
		  }
	  } 
	  end_t = clock();
	  
	  printf("start_t degeri: %lu\n", start_t);
	  printf("end_tdegeri: %lu\n", end_t);
	  printf("dongu calisma suresi(saniye): %.3f", (double)(end_t - start_t)/ (CLOCKS_PER_SEC));
	  
	 }
	 
	 

