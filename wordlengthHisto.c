
#include<stdio.h>

//In a word or not
#define IN 1
#define OUT 0
#define MAXLENGTH 100

//Program to print a histogram of the length of the words in its input.


int main(){

	//Maximum word length is 100.
	int wordlengths[MAXLENGTH];
	int i, j, c, wlength, state, maxfound;

	i = j = c = wlength = maxfound = 0;
	state = OUT;

	//initialize
	for(i = 0; i < MAXLENGTH; ++i)
		wordlengths[i] = 0;


	while((c = getchar()) != EOF){

		if(c == '\n' || c == '\t' || c == ' '){
			state = OUT;

			if (wlength > 0 && wlength < MAXLENGTH){

				if (wlength > maxfound)
					maxfound = wlength;
				wordlengths[wlength]++;

			}
			wlength = 0;
		}
		else{
			state = IN;
			wlength++;
		}
	}

	//Print histogram vertically
	printf("Word Length Histogram\n");

	for(i = 0; i < maxfound; i++)
		printf("____");
	
	printf("\n");
	for (i = maxfound; i > 0; --i){
		printf("%2d", i);

		for(j = 0; j <= maxfound; ++j){
			//Run through the list
			if(wordlengths[j] >= i){
				printf("|%2s", "");
			}
			else{
				printf("%3s", "");
			}
		}
		printf("\n");
	}

	for(i = 0; i <= maxfound; ++i){
		if(i <= 10){
			printf("%2s%d", "",i);
		}
		else{
			printf("%3d", i);
		}
	}

	printf("\n");
	for(i = 0; i < maxfound; ++i)
		printf("____");
	printf("\n");
}

