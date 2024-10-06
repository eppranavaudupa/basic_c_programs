//count vowels and consonents and special character
#include <stdio.h>
int main(){
    char str[100];
    int vow=0,cons=0,spl=0,i;
    printf("enter a string:");
    scanf("%[^\n]s",str);
    for(i=0;i<str[i];i++)
    {
        if(str[i] =='a' || str[i] =='A' || str[i] =='e' || str[i] =='E' || str[i] =='i' || str[i] =='I' || str[i] =='o' || str[i] =='O' || str[i] =='u' || str[i] =='U')
        {
            vow++;
        }
            else  if(str[i]>=65&&str[i]<=97||str[i]>=97&&str[i]<=127)
            
                cons++;
            
        
        else
            spl++;
        
    }
    printf("vowels%d\t",vow);
    printf("consonents%d\t",cons);
    printf("splchar%d\t",spl);
    
 
    
}//main
