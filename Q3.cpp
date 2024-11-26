#include <stdio.h>

int main() {
    char s1[100],s2[100]="hello";
    int i,j;
    printf("Enter the string:");
    scanf("%s",s1);
    for(i=0;s1[i]!='\0';i++);
    for(j=0;s2[j]!='\0';i++,j++)
    {
        s1[i]=s2[j];
    }
    printf("%s",s1);
    return 0;
}
