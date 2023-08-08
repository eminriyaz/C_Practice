# include <stdio.h>       
int Pow(int a,int b) 
{  
    if (b==0)  
        return 1;  
    else  
        return Pow(a,b-1)*a;   
}  
int main() 
{  
    long int base,exponent;   
    printf("Enter Base :\n");  
    scanf("%ld",&base);   
    printf("Enter Power:\n");  
    scanf("%ld",&exponent);   
    printf ("%ld^%ld = %ld",base,exponent,Pow(base,exponent));  
    return 0;  
}  
