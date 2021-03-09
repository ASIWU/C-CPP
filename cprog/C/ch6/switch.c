#include <stdio.h>

int main()
{
    int score;

    scanf("%d", &score);

    switch (score / 10)
    {
        // case 10:
        // case 9:
        //     putchar('A'); break;
        // case 8:
        //     putchar('B'); break;
        // case 7:
        //     putchar('C'); break;
        // case 6:
        //     putchar('D'); break;     
        // default:
        //     putchar('E');
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("vowel\n"); break;
        default:
            printf("failed\n");
    }

    return 0;
}