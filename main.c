#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	
	char a[30], b[30], c[30];
	FILE*fp;
	
	fp=fopen("sample.txt", "w");
	
	printf("input a word:\n");
	scanf("%s", &a);
	fprintf(fp,"%s\n", a);
	
	printf("input a word:\n");
	scanf("%s", &b);
	fprintf(fp,"%s\n",b);
	
	printf("input a word:\n");
	scanf("%s", &c);
	fprintf(fp,"%s\n",c);
	
	fclose(fp);
}
