#include <stdio.h>
#include <string.h>
void main()
{
    char string[20];
    int length, i;
    int flag = 1;

    printf("Enter the string\n");
    gets(string);
    length = strlen(string);
    for (i = 0; i < length; i++)
    {
        if (string[i] != string[length - i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%s is not a palindrome", string);
    }
    else
    {
        printf("%s is a palindrome", string);
    }
}