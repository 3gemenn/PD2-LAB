#include <stdio.h>
char f1(int y);
main(){
	char x;
	x=f1(10);
	printf("%c", x);
}
char f1(int b){
	printf("a");
	if(b<=8)
	return 'a';
	
	else{
		printf("a");
		f1(b--);
	}
}
