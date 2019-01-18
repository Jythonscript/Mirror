#include <stdio.h>

int printLineReversed(int printNewlines);

int main() {

	printLineReversed(0); //print first line of stdin without the newline
	while (printLineReversed(1)) //print lines until line ends in EOF
		;//do nothing

	putchar('\n');//make sure it ends in a newline

	return 0;
}


//returns 0 if stdin line ends in EOF
//returns 1 if not EOF
//
//if printNewlines is 1, it will print newlines, otherwise no
int printLineReversed(int printNewlines) {

	char c;
	//get characters until end of line
	if ((c = getchar()) != '\n') {
		//check for end of stdin
		if (c == EOF) {
			return 0;
		}
		//reverse line if not end
		printLineReversed(printNewlines);
		putchar(c);
	}
	//only print newlines if 
	else if (printNewlines) {
		putchar('\n');
	}
	//not newline, not EOF
	return 1;
}
