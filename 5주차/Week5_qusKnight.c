#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int dx[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int dy[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };

int main(void) {
	char inputData[5];
	scanf("%s", &inputData);

	int row = inputData[1] - '0';
	int column = inputData[0] - 'a' + 1;
	int result = 0;

	for (int i = 0; i < 8; i++) {
		int nextRow = row + dx[i];
		int nextColumn = column + dy[i];
		
		if (nextRow >= 1 && nextRow <= 8 && nextColumn >= 1 && nextColumn <= 8) {
			result += 1;
		}
	}
	printf("%d", result);
	return 0;
}