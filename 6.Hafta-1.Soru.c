#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, n;
	int max;
	int *p;
	
	printf("eleman sayisi giriniz:");
	scanf("%d", &n);
	
	dizip = (int*)calloc(n,sizeof(int));
	
	max = *(p+i);
	
	for(i=0; i<n; i++){
		printf("dizi[%d]:", i);
		scanf("%d", p+i);
	}
	
	for(i=0; i<n; i++){
		if(*(p+i)>max){
			max = *(p+i);}}
			
	printf("%d", max);
	return 0;
}
