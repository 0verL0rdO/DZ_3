#include <stdio.h>

int main()
{
int num;
unsigned char third_byte;

printf("Enter number \n");
scanf("%d",&num);
unsigned char *ptr = (unsigned char *)&num;
ptr+=2;
printf("Enter the third byte \n");
scanf("%hhd",&third_byte);
*ptr = third_byte;
ptr-=2;
for(int i = 0; i < 4; i++)
{
      printf("byte %d = %d \n",i + 1 , *(ptr + i));
}

}
