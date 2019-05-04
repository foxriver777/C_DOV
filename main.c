





#include <stdio.h>
#include <string.h>

 int main (int argc, char *argv[]) {
	FILE *f;
	char ch;
	char vowels[] = "aeiouyAEIOUY";
	char cons[] = "bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ";
	unsigned v=0, c=0;

	f = fopen(argv[1], "r");

	if (f == NULL) {
		puts("Не удалось прочитать файл");
		return 1;
	}

	while ((ch = getc(f)) != EOF) {
		if (strchr(vowels, ch) != NULL) v++;
		else
			if (strchr(cons, ch) != NULL) c++;
	}

	fclose(f);

	printf("Гласные: %.2f%%\nСогласные: %.2f%%\n", ((float)v/(v+c))*100, ((float)c/(v+c))*100);
 }










