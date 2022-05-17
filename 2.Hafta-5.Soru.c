#include <stdio.h>
    float square(const int r){
    	
  	    float alan;
  	    const float pi = 3.14;
  	    alan = pi * r * r;     
		  
		return alan; }
    
    
	
	int main (){
    	
  	int r;
  	
  	printf("bir yaricap degeri giriniz:");
  	scanf("%d", &r);
  	
  	printf("alani=%.2f", square(r));
    
  	
  	
  	 } 
  	
