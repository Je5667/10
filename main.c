#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	
	char str[30];
	FILE*fp;
	
	fp=fopen("sample.txt", "w");
	
	printf("input a word:\n");
	scanf("%s", &str);
	fprintf(fp,"%s\n",str);
	
	printf("input a word:\n");
	scanf("%s", &str);
	fprintf(fp,"%s\n",str);
	
	printf("input a word:\n");
	scanf("%s", &str);
	fprintf(fp,"%s\n",str);
	
	fclose(fp);
}
