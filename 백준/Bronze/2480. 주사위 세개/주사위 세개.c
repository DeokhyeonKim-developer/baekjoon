#include <stdio.h>

int main()
{
    int num[3];
    
    scanf("%d %d %d", &num[0], &num[1], &num[2]);
    
    if(num[0] == num[1] && num[1] == num[2])
    {
        printf("%d", 10000 + num[0] * 1000);
    }
    else if(num[0] != num[1] && num[1] != num[2] && num[0] != num[2])
    {
        int max;
        max = num[0];
        for(int i=1;i<3;++i)
        {
            if(max < num[i])
            {
                max = num[i];
            }
        }
 
        printf("%d", max*100);
    }
    else
    {
        if(num[0] == num[1])
        {
            printf("%d", 1000 + num[1]*100);
        }
        else if(num[1] == num[2])
        {
            printf("%d", 1000 + num[2]*100);
        }
        else if(num[0] == num[2])
        {
            printf("%d", 1000 + num[0]*100);
        }
    }
    
    return 0;
}