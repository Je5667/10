#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void){
	FILE *fp = NULL;
	char temp[40];
	fp = fopen("sample.txt", "r");
	if (fp == NULL)
	printf("������ ������\n");
	
	while (NULL != fgets(temp, sizeof(temp), fp)){
	printf("%s", temp);
}
	
	fclose(fp);
}
