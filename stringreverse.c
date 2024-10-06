#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char dupli[50];
    char a[10];
    int i, len = 0;
    printf("ENTER A STRING: ");
    scanf("%[^\n]s", str);
    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }

    strcpy(dupli, str);
    for(i=0;str[i]!='\0';i++)
    {
        dupli[len-i-1]=str[i];
        // dupli[i]=str[len-i-1];
        
    }
        dupli[i]='\0';
     printf("Duplicate string is: %s\n", dupli);
     
    return 0;
}

