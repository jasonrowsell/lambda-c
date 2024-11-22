#include <stdio.h>

// Macro to define a lambda function.
// R  - Return type
// params - List of function parameters
// body - Function body
#define LAMBDA(R, params, body) \
    ({ R __lambda__ params body __lambda__; })

typedef int (*add_fn)(int, int);

int main()
{
    add_fn add = LAMBDA(int, (int a, int b), {
        return a + b;
    });

    int result = add(3, 4);
    printf("Result: %d\n", result);

    return 0;
}
