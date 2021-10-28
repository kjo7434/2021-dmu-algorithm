//작동 안됨
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 1000
#define TRUE 1
#define FALSE 0

int N, M, fx, fy;
int maze[50][50];
int visited[50][50];

typedef struct _data {
    int x;
    int y;
    int dir;
} Data;
typedef struct _stack {
    Data arr[MAX_LEN];
    int top;
} Stack;

int isReachable() {
    
    int n = N, m = M;
    int i = 0, j = 0;
    Stack stack;
    StackInit(&stack);
    Data temp;
    temp.x = i;
    temp.y = j;
    temp.dir = 0;
    push(&stack, temp);

    while (!isEmpty(&stack)) {
        temp = pop(&stack);
        int d = temp.dir;
        i = temp.x, j = temp.y;
        temp.dir++;
        push(&stack, temp);
        if (i == fx && j == fy) {
            printStack(&stack);
            return TRUE;
        }

        if (d == 0) { //UP
            if (
                i
                - 1 >= 0 && maze[
                    i
                        - 1][j] &&
                        visited[
                            i
                                - 1][j]) {
                Data temp1;
                temp1.x = i
                    - 1;
                temp1.y = j;
                temp1.dir = 0;
                visited[
                    i
                        - 1][j] = FALSE;
                    push(&stack, temp1);
            }

        }
        else if (d == 1) { // LEFT
            if (j - 1 >= 0 && maze[i][j- 1] &&visited[i][j- 1]) {
                Data temp1;
                temp1.x =i;
                temp1.y = j- 1;
                temp1.dir = 0;
                visited[i][j- 1] = FALSE;
                push(&stack, temp1);
            }
        }
        else if (d == 2) { // DOWN
            if (
                i + 1 < n && maze[i + 1][j] &&visited[i + 1][j]) {
                Data temp1;
                temp1.x = i + 1;
                temp1.y = j;
                temp1.dir = 0;
                visited[i + 1][j] = FALSE;
                push(&stack, temp1);
            }

        }
        else if (d == 3) { // RIGHT
            if (j + 1 < m && maze[i][j + 1] &&visited[i][j + 1]) {
                Data temp1;
                temp1.x =i;
                temp1.y = j + 1;
                temp1.dir = 0;
                visited[i][j + 1] = FALSE;
                push(&stack, temp1);
            }
        }
        else {
            visited[temp.x][temp.y] = TRUE;
            temp = pop(&stack);
        }
    }
    return FALSE;
}


void main() {

    int N, M, fx, fy;
    int MIRO[50][50];

    scanf("%d %d", &M, &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%1d", &MIRO[i][j]);
        }
    }
    scanf("%d %d", &fx, &fy);

    isReachable();

    return;
}
