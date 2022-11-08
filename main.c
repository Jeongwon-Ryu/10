#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	char s1[3][100];
	int i;
	FILE*fp;
	
	for(i=0;i<3;i++){
		
		printf("input a ward: ");
		scanf("%s",s1[i]);
	}	
	
	fp=fopen("sample.txt","w");
	
	for(i=0;i<3;i++)
	fprintf(fp,"%s\n",s1[i]);
	

	fclose(fp);
}
