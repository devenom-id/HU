#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <ctype.h>
#include <libgen.h>

int isnum(char* c) {
	if (!c || !strlen(c)) return 0;
	for (int i=0; i<strlen(c); i++)
		if (!isdigit(c[i])) return 0;
	return 1;
}

int tonum(char* c) {
	int a=0;
	for (int i=0; i<strlen(c); i++) {
		a*=10;
		a+=c[i]-'0';
	}
	return a;
}

int max(int* a, int size) {
	int c=0;
	for (int i=0; i<size; i++) {
		if (a[i] > c) c=a[i];
	}
	return c;
}

void fname(char* s) {
	for (int i=0; i<strlen(s); i++) {
		if (s[i] == '.') s[i] = 0;
	}
}

int main() {
	DIR* dir = opendir(".");
	struct dirent* dt;
	int *arr = NULL;
	int e=0;
	while ((dt = readdir(dir)) != NULL) {
		char* f = strdup(dt->d_name+1);
		fname(f);
		if (!isnum(f)) continue;
		arr=realloc(arr, sizeof(int)*e+1);
		arr[e]=tonum(f);
		e++;
	}
	closedir(dir);
	printf("%d\n", max(arr, e));
}
