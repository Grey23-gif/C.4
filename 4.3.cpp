#include <stdio.h>

int main() 
{
    int number;
    
    printf("Nhap 1 so nguyen: ");
    scanf("%d", &number);
    if (number == 0) 
    {
        printf("So ban nhap la so 0.\n");
        return 0;
    }
    if (number %3==0 && number % 5==0)
    {
        printf("So ban nhap chia het cho 5 va 3.\n");
        return 0;
    } 
    if(number %3==0) 
    {
        printf("So ban nhap la so chia het 3.\n");
    }
    if(number %5 ==0) 
    {
        printf("So ban nhap chia het cho 5.\n");
    }
    else
	{
		printf("So ban nhap khong  chia het cho 5 va 3.\n");
	} 
   
    return 0;
}	
