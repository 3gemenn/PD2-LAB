#include <stdio.h>
int main(){
	int i, n;
	int toplam = 0;
	int dizi[100];
	int *p;
	
	p = dizi;
	
	printf("eleman sayisi giriniz:");
	scanf("%d", &n);
	
  
    for(i=0; i<n; i++){
	    printf("dizi[%d]:", i);
		scanf("%d", &dizi[i]);
	}
	
	
	for(i=0; i<n; i++){
	  
	   printf("%d\n", *p);
	  
	   toplam = toplam + *p;
	   p ++;
}
	printf("%d", toplam);
    
	return 0;
}
