#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand((unsigned int)time(NULL));
	int IsPreLetter = 0;
	int max = rand() % 80 + 10, len = 0;
	int ran;
	while (len < max) {
		ran = rand() % 3;
		if (ran == 1) printf("%c", rand()%15 + 33); 
		else if (ran == 2) printf("%c", rand()%68 + 58);
		else if (ran == 0 && IsPreLetter == 1) {
			printf("%d", rand()%1000 + 1);
			IsPreLetter = 0;
			len += 4;
			continue;
		}
		if (ran != 0) {
			IsPreLetter = 1;
			len++;
		}

	}
	printf("\n");
	return 0;
}