#include <stdio.h>
#include <stdlib.h>
int x,m,n,t,i,r,count = 0,counter = 0;
char task[100][100];
void f1()
    {
        printf("Welcome to task manager!\n");
        printf("1:Add task\n");
        printf("2:View tasks\n");
        printf("3:Remove task\n");
        printf("4:Exit\n");
        printf("Enter a number: ");
        scanf("%d",&x);
        if (x==1)
        {
            printf("Enter number of tasks: ");
            scanf("%d",&t);
            for(count=0; count < t; ++count)
            {
                printf("Enter task: ");
                while(getchar() != '\n');               // empty the buffer
                gets(task[counter]);                    //For some reason you have to enter the input twice after the first loop. I think it has something to do with th 'getchar' command nut i couldn't fix it.
                printf("Task added successfully!\n");
                counter = counter + 1;
            }
            f1();
        }
            else if (x==2)
    {
        {
            r = 1;
            m = 0;
            for (i=0;i<=counter;++i)
            {
                printf("%d-%s\n",r,task[m]);
                r = r+1;
                m = m + 1;
            }
            printf("Go to main menu?(1:yes)");
            scanf("%d",&m);
            if (m=1)
            {
             f1();
            }
        }
    }
    else if (x==3)
        {
            r = 0;
            m = 0;
            for (i=0;i<=counter;++i)
            {
                printf("%d-%s\n",r,task[m]);
                r = r+1;
                m = m+1;
            }
            printf("Select which task you want to remove: \n");
            scanf("%d",&n);
            printf("Task Removed\n");
            printf("Enter new task: ");
            while(getchar() != '\n');
            gets(task[n]);
            f1();
        }
    else if (x=4)
        {
                printf("Hope to see you again!");                   //Tried to make an if statement here to make sure you wanted to exit but it didn't work. I used the 'scanf' command to input 1 or 2 and used an if statement so 1 would be exit and 2 would go back to menu but the if statement didn't work and it always went with the first condition no matter what the input was.
        }
    }
main()
{
f1();
return(0);
}




