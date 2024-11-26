#include <stdio.h>

int main() {
    char s1[100],s2[100]="hello";
    int i;
    printf("Enter the string:");
    scanf("%s",s1);
    for(i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    printf("%s",s2);
    return 0;
}
