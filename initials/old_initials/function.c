#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

float get_number();
int get_integer();
int add_two_ints();
float first_func(float x, float y);

int main(void)
{
  
  int a = get_integer();
  int b = get_integer();


  int d = add_two_ints(a, b);
  printf("%i + %i =  %i\n", a, b, d);
}

int add_two_ints(int a, int b)
{
  return a + b;
}

int get_integer()
{
  printf("Please enter a number: ");
  return get_int();
}


float get_number()
{
  printf("Please enter a number: ");
  return get_float();
  //printf("\n");
  // return a;
}


float first_func(float x, float y)
{
    return x * y;
}