#include<stdio.h>

 int main()
 {
   int a,b;
   int choice;
  printf("1.Addition\n");
  printf("2.subtraction\n");
  printf("3.Multiplication\n");
  printf("4.Division\n");

  printf("Enter your choice:");
  scanf("%d",&choice);

  printf("Enter two numbers:");
  scanf("%d%d",&a,&b);

  if(choice==1)
  {
  printf("Answer=%d",a+b);
  }
  else if(choice==2)
  {
  printf("Answer=%d",a-b);
  }
  else if(choice==3)
  {
  printf("Answer=%d",a*b);
  }
  else if(choice==4)
  {
  if(b!=0)
  printf("Answer=%d",a/b);
  else
     printf("Division by zero is not possible");

     }
     else
     {
     printf("invalid choice");
     }

      return 0;
     }



