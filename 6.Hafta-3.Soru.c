#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, k, n, m;
	int *p;
	
	printf("eleman sayisi giriniz:");
	scanf("%d", &n);
	
	dizip = (int*)malloc(n * sizeof(int));
	
	for(i=0; i<n; i++){
		printf("dizi[%d]:", i);
		scanf("%d", (p+i));
	}
	
	realloc(p , (m+n)* sizeof(int));
	printf("yeni eleman sayisi giriniz:");
	scanf("%d", &m);
	
	for(k=0; k<m; k++){
		printf("dizi[%d]:", k);
		scanf("%d", (p+k));
	}
	
	for(k=0; k<m; k++){
		printf("%d\n", *(p+k));
	}
	
	free(p);
	return 0;
}


