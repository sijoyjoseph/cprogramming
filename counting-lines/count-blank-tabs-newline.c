#include <stdio.h>

int main() {
	int c;
	long nl, bl, tb;
	nl = 0;
	bl = 0;
	tb = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;
		}
		else if (c == ' ') {
			++bl;
		}
		else if (c == '\t') {
			++tb;
		}
		else ;
	}
	printf("Newline: %ld tab: %ld blank: %ld\n", nl, tb, bl);
}
