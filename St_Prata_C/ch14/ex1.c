#include <stdio.h>
#include <string.h>

char * s_gets(char * st, int n);

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void) {
	struct book library[MAXBKS];
	int count = 0;
	int index;

	printf("Write Title book\n");
	printf("Press return after\n");
	while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
			&& library[count].title[0] != '\0') {
		printf("Write Name author\n");
		s_gets(library[count].author, MAXAUTL);
		printf("Input price\n");
		scanf("%f", &library[count++].value);
		while (getchar() != '\n')
			continue;
		if (count < MAXBKS)
			printf("Input next Title Book\n");
	}
	if (count > 0) {
		printf("Your catalog\n");
		for (index = 0; index < count; index++)
			printf("%s author %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
	}
	else 
		printf("Not a book!\n");
	return (0);
}

char * s_gets(char * st, int n) {
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if (ret_val) {
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else 
			while (getchar() != '\n')
				continue;
	}
	return (0);
}



