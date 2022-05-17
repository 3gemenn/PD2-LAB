#include <stdio.h>
#include <stdlib.h>
int main(){
	int sayi;
	int *p;
	
	sayip=(int*)malloc(1*sizeof(int));
	
	while(1){
		printf("sayi giriniz:\n");
		scanf("%d", &sayi);
		
		if(sayi==0){
			break;
		}
		
		*(p+y)=sayi;
		y++;
		sayip=(int*)realloc(sayip, sizeof(int));
	}
	for(x=0; x<y; x++){
		printf("%d", *(p+x));
	}
	free(p);
	return 0;
	
}
