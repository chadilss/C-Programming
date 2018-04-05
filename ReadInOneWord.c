#include <stdio.h>
#include <stdlib.h>

FILE *infile;
char word[65];

int main(){
	infile = fopen("Data.txt", "r");
	if(infile == NULL){
		printf("Error: Cannot find file Data.txt");
		exit(0);
	}
	while(fscanf(infile, "%s", word) != EOF){
		printf("[%s]", word);
	}
	fclose(infile);
}