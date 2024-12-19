#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100];
    printf("Enter a string: ");
    scanf("%s",arr);

    int len = strlen(arr);
    if (len<2 || arr[len-1] != 'b' || arr[len-2] != 'b')
    {
        printf("Invalid String\n");
        return 0;
    }

    for(int i=0; i<len-2; i++)
    {
        if(arr[i] != 'a')
        {
            printf("Invalid String\n");
            return 0;
        }
    }
    printf("Valid String");
    return 0;
}