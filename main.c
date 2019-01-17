#include <stdio.h>

int printLineReversed();

int main() {

	
	while (printLineReversed()) {
		//do nothing
	}
	putchar('\n');

	return 0;
}


//returns 1 if the line ends in a newline
//returns 0 if the line ends in an EOF
//returns -1 if neither of the above is true
int printLineReversed() {

	char c;
	if ((c = getchar()) != '\n') {

		//check for end of stdin
		if (c == EOF) {
			return 0;
		}

		//reverse line if not end
		printLineReversed();
		putchar(c);
	}
	else {
		//end of current line, but not end of stdin
		putchar('\n');
		return 1;
	}
	return -1;
}
