#include <stdio.h>
int ebob_bul(int a, int b){
    if(x==y)
    return x;
    
    if(x>y)
    return ebob_bul(x-y, y);
    
    else
    return ebob_bul(x, y-x);
}

int main(){
	int x, y;
	
	printf("birinci sayiyi giriniz:");
	scanf("%d", &x);
	
	printf("ikinci sayiyi giriniz:");
	scanf("%d", &y);
	
	printf("%d", ebob_bul(x, y));
	return 0;
}
