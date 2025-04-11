#include <stdio.h>

int main()
{
    int num, val;
    
    scanf("%d", &num);
    
    val = num / 4;
    
    for(int i=0;i<val;++i)
    {
        printf("long ");
    }
    printf("int");
    
    return 0;
}