#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayif();

FILE *infile;
char filename[40], word[65];

int main(){
	printf("Enter the file name of a program: ");
	gets(filename);
	infile = fopen(filename, "r");
	if(infile == NULL){
		printf("Error: Cannot open file %s\n", filename);
		exit(0);
	}
	while(fscanf(infile, "%s", filename) != EOF){
		if(strcmp(word, "if") == 0){
			displayif();
			printf("\n");
		}
	}
	fclose(infile);
}
void displayif(){
	while(true){
		printf("%s ", word);
		if(strcmp(word, "{") == 0){
			return;
		}
		fscanf(infile, "%s", word);
	}
}