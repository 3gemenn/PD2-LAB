#include <stdio.h>
void fun(int n, int a, int b){
	if(i >=10)
     	return;
	
	fun(i + 2, x, y + i);
	printf("%d %d %d\n", i, x, y);
	
}
int main(){
	int i=0;
	int x=5;
	int y=7;
	
	fun(i, x, y);
	return 0;
}
