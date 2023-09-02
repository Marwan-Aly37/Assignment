#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int x;
    printf("Enter start of countdown: ");
    scanf("%d",&x);
    while(x>=1)
    {
        printf("%d\n",x);
        sleep(1);
        x = x-1;
        if(x<1)
        {
            printf("Blast off to the moon!");
            break;
        }
    }
    return 0;
}
