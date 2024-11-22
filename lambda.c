/* lambda.c */
#include <stdio.h>
#include <stdarg.h>

#define LAMBDA(arg, body) \
    int lmb__LINE__(int arg) { return body; }

void abc() {}

int main()
{
    LAMBDA(x, x + 1)

    return 0;
}