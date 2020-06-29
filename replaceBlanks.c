// Program replaces strings of one or more blanks by a single blank.


#include<stdio.h>

int main(){

	int n = 0;
	char  c;
	while ((c = getchar()) != EOF){
		if(c == ' '){
			putchar(c);
			while ((c = getchar()) == ' ')
					;
		}
		if (c != ' ')
			putchar(c);
	}

	return 0;
}
