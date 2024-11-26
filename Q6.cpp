#include <stdio.h>
#include<string.h>
int main() {
    char s1[100],ch;
    int i,j;
    printf("Enter the string:");
    scanf("%s",s1);
    printf("\nEnter the the character to be searched:");
    scanf("%c",&ch);
   for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]=ch)
        {
            printf("The first occurence of the given character is %d",i);
            break;
        }
    }    
    return 0;
}
