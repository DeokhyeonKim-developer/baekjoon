#include <stdio.h>

int main()
{
    int input1, input2, a, b, sum;
    scanf("%d", &input1);
    scanf("%d", &input2);
    
    a = input2 % 10;
    b = input2 % 100;
    
    printf("%d\n", input1 * a);
    printf("%d\n", input1 * (b - a) / 10);
    printf("%d\n", input1 * (input2 / 100));
    sum = input1 * a + input1 * (b - a) + (input1 * (input2 / 100)) * 100;
    printf("%d\n", sum);
    return 0;
}