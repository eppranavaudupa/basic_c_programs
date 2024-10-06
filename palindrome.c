//palindrome or not
#include <stdio.h>
int main(){
    char str[100];
    int i,flag=0,len=0;
    printf("enter a string:");
    scanf("%[^\n]s",str);
    for(i=0;i<str[i];i++)
    {
        len++;
    }
    for(i=0;i<len/2;i++)
    {
     if(str[i]!=str[len-i-1])   
     {
         flag=1;
         break;
     }
    
    }
    if(flag==0){
        printf("given string is a palindrome");
    }else{
        printf("given string is not  a palindrome");
    }
}
