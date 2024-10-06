//HCF or GCD for given 3 number 

// Online C compiler to run C program online
#include <stdio.h>
int gcd(int a, int b)
    {

       if(a%b==0)
            {
                return b;
            }
        else
            {
                return gcd(b,a%b);
            }
            
    }
    
 int gcd_3(int a,int b,int c)
    {
        return gcd(gcd(a,b),c);
    }
int main() {
    
    int a,b,c;
    printf("enter the  3 numbers: \t ");
    scanf("%d%d%d",&a,&b,&c);
    
    printf("the gcd value is %d",gcd_3(a,b,c));
    return 0;
}

