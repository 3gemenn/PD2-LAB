#include <stdio.h>
int main(){
	int var=10;
	int*p;
	p=&var;
	
	printf("\n address of var is:%p", &var);
	printf("\n address of var is:%p", p);
		
    printf("\n value of var is:%d", var);
	printf("\n value of var is:%d", *p);
	printf("\n value of var is:%d", *(&var));
					
	printf("\n value of pointer is:%p", p);
	printf("\n adress of pointer is:%p ", &p);
							
	return 0;
					
}
