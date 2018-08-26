#include <stdio.h>

int main() {
	int c, lastc = '\0';
	c = getchar();
	while (c != EOF) {
		if (c == ' ' && lastc == ' ')
			continue;
		putchar(c);
		lastc = c;
		c = getchar();
	}
}
