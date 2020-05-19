// Sample file

// %
// =
// -

# include <stdio.h>
#include <unistd.h>

void add()
{
  int a;
  int b;
  int result;
  printf("add\n");
  printf("type the first number");
  scanf("%d",&a);
  printf("type the second number");
  scanf("%d",&b);
  result = a + b ;
  printf("result is %d\n",result);
}

void subtract()
{
  int a;
  int b;
  int result;
  printf("subtract\n");
  printf("type the first number");
  scanf("%d",&a);
  printf("type the second number");
  scanf("%d",&b);
  result = a - b ;
  printf("result is %d\n",result);
}
void multiply()
{
  int a;
  int b;
  int result;
  printf("multiply\n");
  printf("type the first number");
  scanf("%d",&a);
  printf("type the second number");
  scanf("%d",&b);
  result = a * b ;
  printf("result is %d\n",result);
}
void divide()
{
  float a;
  float b;
  float result;
  printf("divide\n");
  printf("type the first number");
  scanf("%f",&a);
  printf("type the second number");
  scanf("%f",&b);
  result = a / b ;
  printf("result is %f\n",result);
}
void largest()
{
  int a;
  int b;
  int largest ;
  printf("largest\n");
  printf("type the first number");
  scanf("%d",&a);
  printf("type the second number");
  scanf("%d",&b);
  if( a > b )
  {
    largest  = a  ;
  }
  if( a < b )
  {
    largest  = b  ;
  }
 
   if (a == b )
  {
    printf("largest = both\n");
  } 
  else
  {
    printf("largest is %d\n",largest ); 
  }
 
}


void main()
{
    char name [100];
    int i;
    int age;
    int option;

    age =0;
    while(age <10)
    {
      printf("type your age\n");
      scanf("%d", &age);
    }
    option =0;
    while(option != 6)
    {
      printf("type 1 for add,2 for subtract,3 for multiply,4for divide,5 for largest,6 for end");
      scanf("%d", &option);
      if(option ==1)
      {
        add() ;
      }
      if(option ==2)
      {
        subtract();
      }
      if(option ==3)
      {
        multiply();
      }
      if(option ==4)
      {
        divide();
      }
      if(option ==5)
      {
        largest();
      }

    }
    
    for (i = 0; i< 10; i++)
    {
        printf("%d\n", i);
 //       sleep(1);
    }
    add();
    subtract();
    multiply();
    divide();
    largest();
  printf("type your name ");
    scanf("%s", name);
   printf("hello %s\n", name) ;
   scanf("%s",name);
   printf("how are you doing\n");
}

