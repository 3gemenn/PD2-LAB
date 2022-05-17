#include <stdio.h>

  void fonk(void);
  
  int gid = 355;
  
  int main(void){
  	printf("deneme1.c gid degisken degeri: %d\n", gid);
  	
  	fonk();
  	return 0;
	
   }
   
   extern int gid;
   
   void fonk(void){
   	printf("deneme2.c gid degisken degeri: %d", gid); 
   	
   }
   
