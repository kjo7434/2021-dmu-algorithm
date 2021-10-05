#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n = 0;
int x = 1, y = 1;
int dx[4] = { 0,0,-1,-1 };
int dy[4] = { -1,1,0,0 };

char moveType[4] = { 'L','R','U','D' };
char order[100];
char plans[100];

int main(void) {
    scanf("%d \n", &n);
    int count = 0, cnt = 0;
    scanf("%[^\n]s", order);

    while (1) {
        count++;
        if (order[count] == '\n' || '\0') break;
        if (order[count] == ' ') continue;
        plans[cnt] = order[count];
        char plan = plans[cnt];

        //좌표
        int nx = -1, ny = -1;

        for (int j = 0; j < 4; j++) {
            if (plan == moveType[j]) {
                nx = x + dx[j];
                ny = y + dy[j];
            }
        }
        if (nx<1 || ny<1 || nx>n || ny> n) continue;
        x = nx;
        y = nx;
        cnt++;
    }
    printf("%d %d \n", x, y);
    return 0;
}