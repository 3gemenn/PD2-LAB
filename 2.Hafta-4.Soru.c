#include <stdio.h>
  void fonk(void);
  void fonk_sta(void);
  
  int main(void){
  	fonk();
  	fonk_sta();
  	
  	printf("\n");
  	
  	fonk();
  	fonk_sta();
  	
  	return 0;
  	
  }

   void fonk(void){
   	int x = 1;
   	printf("fonk() id degisken degeri: %d\n", x);
   	
   	x = x + 21;
   	printf("fonk() id degisken degeri: %d\n", x); }
   	
   	void fonk_sta(void){
   	static int x = 1;
   	printf("fonk_sta() id degisken degeri: %d\n", x);
   	
   	x = x + 21;
   	printf("fonk_sta() id degisken degeri: %d\n", x); 
	   }


