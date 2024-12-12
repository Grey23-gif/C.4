#include <stdio.h>

int main() 
{
    int number;
    
    printf("Nhap thang : ");
    scanf("%d", &number);
    if(number <13)
    {
        if(number ==2 )
        {
             printf("thang 2 co 28 hoac 29 ngay (nam nhuan)"); 
             return 0;
        }
        if(number == 1 || number == 3 || number == 5 || number == 7 || number == 8 || number == 10 || number == 12 )
        {
            printf("thang %d co 31 ngay ", number  );
        }
        else
        {
             printf("thang %d co 30 ngay ", number  );
        }
    }
    else
	{
		printf("Thang khong hop le, vui long nhap lai." ); 
	} 
   
    return 0;
}
