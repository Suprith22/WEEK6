#include <stdio.h>

int main() {
    char s[100];
    int i;
    printf("Enter the string:");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++);
    printf("The lenght of the string is %d",i);
    return 0;
}
