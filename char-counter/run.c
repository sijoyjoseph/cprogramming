#include <stdio.h>

int main() {
	long nc, cn;
	nc = 0;
	cn = 0;
	
	while (getchar() != EOF) {
		++nc;
		cn++;
	}
	printf("Pre  %ld\n", nc);
	printf("Post  %ld\n", cn);
	return 0;
}
