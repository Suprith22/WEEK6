#include <stdio.h>

int main() {
    char s1[100];
    char ch;
    int i,j;
    printf("Enter the string:");
    scanf("%s",s1);
    for(i=0;s1[i]!='\0';i++);
    for(j=0;j<i/2;j++)
    {
     ch=s1[j];
     s1[j]=s1[i-j-1];
     s1[i-j-1]=ch;
    }
    printf("%s",s1);
    return 0;
}
