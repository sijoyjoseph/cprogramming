#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
	int c, nw, nl, state, cc;
	nw = nl = state = cc = 0;
	while ((c = getchar()) != EOF) {
		++cc;
		if (c == '\n') {
			++nl;
		}
		if (c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("Word Count: %d, Line count: %d, Character Count: %d\n", nw, nl, cc);
}
