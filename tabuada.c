#include<stdio.h>
//Tabuada de qualquer número com laço while

main (){
	int i, n;
	n = 1;
	printf("Digite um numero: ");
	scanf(" %d", &i);
	while(n<=10){
		printf("\n%2d * %2d = %2d", i, n, i*n);
		n = n+1;
	}
}
