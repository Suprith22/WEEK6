#include <stdio.h>

int main() {
    char s1[100];
    int i,j;
    printf("Enter the string:");
    scanf("%s",s1);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>=65 && s1[i]<=90)
        {
            s1[i]=s1[i]+32;
        }
    }
    printf("%s",s1);
    return 0;
}
