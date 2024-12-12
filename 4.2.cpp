#include <stdio.h>

int main() 
{
    int number;
    
    printf("Nhap 1 so nguyen: ");
    scanf("%d", &number);\
    
    if (number == 0) 
    {
        printf("So ban nhap la so 0.\n");
        return 0;
    }
    
    if (number %2 == 0 ) 
    {
        printf("So ban nhap la so chan.\n");
    } 
    else
    {
        printf("So ban nhap la so le.\n");
    }
   
    return 0;
}
