#include <stdio.h>
#include<string.h>
int main() {
    char s1[100],n[100],ch;
    int i,j;
    printf("Enter the string:");
    scanf("%s",s1);
    strcpy(n,s1);
    for(i=0;s1[i]!='\0';i++);
    for(j=0;j<i/2;j++,i++)
    {
        ch=s1[j];
        s1[j]=s1[i-j-1];
        s1[i-j-1]=ch;
    }
    if(n==s1)
    {
        printf("Palindrome");
    }
    return 0;
}
