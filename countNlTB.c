
// Program to count the occurences of tabs, blanks and new lines.

#include<stdio.h>

int  main (){

	int c, nl, tab, blank;

	nl  =  tab = blank = 0;

	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
		else if (c == '\t')
		   ++tab;
		else if (c == ' ')
			++blank;


	printf("newline = %d\n", nl);

	printf("blanks = %d\n", blank);

	printf("tabs = %d\n", tab);
}	
