#include <stdio.h>
int sum(int i)
{
	if(i>=1){
		return (i+sum(i-1));
	}
	else{
		return 0;
	}
}

int main()
{
	int sayi;
	printf("Sayi giriniz ");
	scanf("%d",&sayi);
	printf("%d",sum(sayi));
}
