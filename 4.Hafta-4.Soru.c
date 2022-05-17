#include <stdio.h>
void fun(int i){
	if(i==0)
	return;
	
	fun(i/2);
	printf("%d", i%2);
}

int main(void){
	int i=25;
	fun(i);
}
