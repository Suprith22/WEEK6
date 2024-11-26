#include <stdio.h>

int main() {
    char s1[100],s2[6]="Hello";
    int i,j;
    printf("Enter the string:");
    scanf("%s",s1);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==s2[i])
        {
            j=1;
        }
        else
        {
            j=0;
            break;
        }
    }
    if(j==1)
    {
        printf("Equal");
    }
    else
    {
        printf("Not equal");
    }
    return 0;
}
