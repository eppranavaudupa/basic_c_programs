//length of a string//
#include <stdio.h>
int main(){
    char str[100] ;
    int i,len=0;
    printf("enter a string: ");
    scanf("%[^\n]s",str);
    for(i=0;i<str[i];i++)
    {
        len++;
    }
    printf("%d",len);
    
    
}
