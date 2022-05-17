#include <stdio.h>
int main(){
	char *str1="1234567890";
	char *p1;
	
	p1 = str1;
	
	int uzunluk = 0;
	while(*p1 != '\0'){
		uzunluk++;
		p1++;
	}
    printf("%d", uzunluk);
}
