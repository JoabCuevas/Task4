#include<stdio.h>
#include<stdlib.h>

int i;
int perimeter;
int area;
float m;
int n;
char c; 
int a;

int main(void){

area = 3 * 5;
perimeter = 2* 3 + 2*5;
m = 2.0;
n = 2;
c = 'A';
a = 5;

 printf("Exercise 4-1\n");

    printf("My name is Joab\n");    

    printf("My SSN is 199384569\n");

    printf("My DB is 08/12/2001\n");
  
printf("Exercise 4-2\n");

    printf("*****\n");
    printf("*\n");
    printf("*\n");
    printf("*****\n");
    printf("*\n");
    printf("*\n");
    printf("*****\n");

printf("Exercise 4-3\n");

  printf("The area of a rectangle with 5 units of height and 3 units of width is %d and its perimeter is %d\n", area, perimeter);
// to make this into a real number you must declare it as "float" and then when expressing the area and perimeter you must use numbers with .0
printf("Exercise 4-4\n");


printf ("H   H EEEEE L     L        O0\n");
printf ("H   H E     L     L       O  O\n");
printf ("H   H E     L     L      O    O\n");
printf ("HHHHH EEEEE L     L     O      O\n");
printf ("H   H E     L     L      O    O\n");
printf ("H   H E     L     L       O  O\n");
printf ("H   H EEEEE LLLLL LLLLL    OO\n");

printf("Exercise 4-5\n");

printf("%f as %%d: %d\n", m, m);
printf("%d as %%f: %f\n", n, n);
printf("%c as %%d: %d\n", c, c);
 
printf("Exerciese 4-6\n");
 
printf("The are area of a cube with 5 units of width and lenght is %d\n", a*a);
 

return (0);

}

