#include <stdio.h>
int teksayibulma(int dizi[], int n){
	if(n<0)
	return 0;
	
	if(dizi[n-1] % 2!= 0)
	return teksayibulma(dizi, n-1) + 1;
	 
	else
    return teksayibulma(dizi, n-1);
}
int main(){
	int dizi[100];
	int n, i;
	printf("eleman sayisini giriniz:");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("dizi[%d]:", i);
		scanf("%d", &dizi[i]);}
		
	printf("%d", teksayibulma(dizi, n));
	return 0;
}


