#include <stdio.h>
#define PI 3.14
/*
To run:
yacc -d parser.y
lex parser.l
gcc -o a.out y.tab.c yy.lex.c -ll
./a.out < input.c
*/

struct inp
{
    int a;
};

int check(int a, int b)
{
    return (a > b);
}

/* Sample code */
int main()
{
    struct inp ab;
    int r = 5;
    printf("abc");
    return 0;
}