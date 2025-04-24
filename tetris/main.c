#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef enum
{
    EMPTY = -1,
    I,
    J,
    L,
    O,
    S,
    T,
    Z
}ShapeId;


typedef enum
{
    RED = 41,
    GREEN,
    YELLOW,
    BLUE,
    PURPLE,
    CYAN,
    WHITE,
    BLACK = 0,
}Color;


typedef struct
{
    ShapeId shape;
    Color color;
    int size;
    char rotates[4][4][4];
}Shape;

Shape shapes[7] = {
    {
		.shape = I,
		.color = ,
        {},
        {},
        {},
        {}
    },
    {

    },
    {

    }
};

int main() {
    Color cur;
    for (int i = 0;i < 1;i++) {
		for (int r = 0;r < 4;r++) {
            for (int s = 0;s < shape[i].size;s++) {
				for (int t = 0;t < shape[i].size;t++) {
					if (shape[i].rotates[r][s][t] == 0) {
                        cur = WHITE;
					}
					else {
                        cur = Shape[i].color;
					}
					printf("\033[%dm  \033[0m", cur);
				}
				printf("\n");
            }
			printf("\n");
		}
    }
	return 0;
}