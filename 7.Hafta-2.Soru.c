#include <stdio.h>
#include <stdlib.h>

int main(){
	int *s1, *s2;
	int n, m;
	int i, k, j;
	
	printf("eleman sayisi giriniz:");
	scanf("%d", &n);
	
	s1 =(int*)malloc(n * sizeof(int));
	for(i=0; i<n; i++){
		printf("dizi[%d]:", i);
		scanf("%d", s1+i);
	}
	
	printf("eleman sayisi giriniz:");
	scanf("%d", &m);
	
	s2 =(int*)malloc(m * sizeof(int));
	for(k=0; k<m; k++,i++){
		printf("dizi[%d]:", i);
		scanf("%d", s2+k);
	}
	
	int *sonuc;
	sonuc = (int*)calloc((m+n), sizeof(int));
	
	for(i=0; i<n; i++){
		sonuc[i]=s1[i];
	}
		
	for(k=0; k<m+n; k++, i++){
	   sonuc[i]= s2[k];
	}
	
	for(j=0; j<(m+n); j++){
		printf("%d", sonuc[j]);
	}
	return 0;
}
