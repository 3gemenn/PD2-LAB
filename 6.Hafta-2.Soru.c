#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *p;
	
	isimp = (char*)malloc(15 * sizeof(char));
    
    char isim[15]="Egemen Öztoprak";
    
    strcpy(p, isim);
    printf("%s", isim);
	
	return 0;
}
