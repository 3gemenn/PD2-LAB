#include <stdio.h>
int toplam(int n){
	if(i==1)
	return i;
	
	else
	return( i + toplam(i-1));
}
int main(void){
	int sayi=5;
	printf("sonuc:%d", toplam(sayi));
	
}
