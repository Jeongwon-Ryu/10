#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	FILE*fp= NULL;
	char c;
	fp=fopen("sample.txt", "r");
	
	if (fp ==NULL)
	    printf("파일을 못 열음\n");
	    
	while ((c=fgetc(fp)) != EOF)
	    putchar(c);

	fclose(fp);
	
}
