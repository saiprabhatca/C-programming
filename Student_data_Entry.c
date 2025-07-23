/*Student Data Entry*/

#include<stdio.h>
#include<string.h>
int main()
{
    char yourname[25];
    int yourclass;
    int yourmarks;
    char yourresponce[5];

    while (1)
    {
        printf("Enter your name\n");
        scanf(" %[^\n]",yourname);
    
        printf("Enter your class\n");
        scanf("%d",&yourclass);

        printf("Enter your Marks\n");
        scanf("%d",&yourmarks);
        printf("\n");

        if(yourmarks>200)
        {
            printf("You have entered more then the required marks.\n");
            continue;
        }

        printf("Your name is- %s\n",yourname);
        printf("Your Class is- %d\n",yourclass);
        printf("Your Marks is- %d/200\n",yourmarks);
        printf("\n");

        printf("The data you entered is final? (YES/NO)\n");
        scanf(" %s",yourresponce);

        if (strcmp(yourresponce, "yes")==0 || strcmp(yourresponce, "YES")==0)
        {
            break;
        }
        printf("Re-enter the data\n\n");
    }
    printf("\ntankuu ;)");
    return 0;
}