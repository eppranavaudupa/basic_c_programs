//convert upper case to lower case and vice versa
#include <stdio.h>
int main(){
    char str[100];
    printf("Enter string:");
    scanf("%s",str);
    int i;
    for(i=0;str[i];i++)
    {
       if(str[i]>=97 && str[i]<=122)
        str[i]=str[i]-32;
        
        else if (str[i]>=65&&str[i]<=97)
            str[i]=str[i]+32;
    }
    printf("%s",str);
    
    
}//main
