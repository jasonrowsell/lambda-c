#include <stdio.h>

#define LAMBDA(R, params, body) \
    ({ R __lambda__ params body __lambda__; })

int main()
{
    int (*add)(int, int) = LAMBDA(int, (int a, int b), { return a + b; });

    int result = add(3, 4);
    printf("Result: %d\n", result);

    return 0;
}
