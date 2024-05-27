#include <stdio.h>
#include <stdlib.h>
#define True 1
#define rows 146

char *fill_spaces() {
	char *spaces = malloc(rows*2);
	for (int x=0; x<rows; x++){
		spaces[x] = ' ';
		spaces[x + 1] = '\0';
	}
	return spaces;
}

void pyramid(char *spaces) {
	int reverse = rows-1;
	char a[2] = { '*','\0' };
	char b[rows * 2];
	char c[rows * 2];
	b[0] = '\0';
	c[0] = '\0';
	for (int i = 0; i < rows; i++) {
		printf("%s%s%s%s\n", spaces, a, b, c);
		if (i + 1 <= rows) {
			b[i] = '*';
			b[i + 1] = '\0';
			c[i] = '*';
			c[i + 1] = '\0';
			spaces[reverse] = '\0';
		}
		reverse--;
	}
}

int main(){
	char *spaces = fill_spaces();
	//printf("%s", spaces);
	pyramid(spaces);
	free(spaces);
	return 0;
}