/*Calculator using switch case*/
#include<stdio.h>
#include<string.h>
int main()
{
    float firstnum;
    char operation;
    float secondnum;
    float result;
    char yesorno[5];
    printf("Simple Calculator\n\n");
    while(1){
    printf("Enter First Number: ");
    scanf("%f",&firstnum);

    printf("Enter Operation(+.-,*,/): ");
    scanf(" %c",&operation);

    printf("Enter Second Number: ");
    scanf("%f",&secondnum);
    switch(operation)
    {
        case '+':
            result=firstnum+secondnum;
            printf("\nResult: %.2f",result);
            break;
        case '-':
            result=firstnum-secondnum;
            printf("\nResult: %.2f",result);
            break;
        case '*':
            result=firstnum*secondnum;
            printf("\nResult: %.2f",result);
            break;
        case '/':
            if(secondnum==0){
                    printf("\nError,CANNOT BE DIVIDED BY ZERO\n");
                    continue;
                }
            result=firstnum/secondnum;
            printf("\nResult: %.2f\n",result);
            break;
        default:
                printf("Invalid Operation");
            }
        printf("\nWant to make another Calculation?(yes/no): \n");
        scanf("%s",yesorno);
        
        if(strcmp(yesorno,"no")==0 || strcmp(yesorno,"NO")==0)
        {
            break;
        }
        continue;
    
    }
    printf("\nThank You");
    
}