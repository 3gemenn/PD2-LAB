#include <stdio.h>
    int topla(int x){
 	
	if(x==0){
 	   return 0;
	 }
       return x + topla(x-1);
 
   }
    
	int main(){
	int i;
	printf("bir sayi giriniz:");
	scanf("%d", &i);
	
	printf("%d", topla(i));
	
	return 0;
	
	}
