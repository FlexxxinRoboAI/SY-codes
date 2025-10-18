\\ sum of array Elements 
#include<stdio.h>
int main ()
{
    int n[5];
    int i , sum = 0;

printf("Enter 5 elements:\n");
 for (i = 0; i < 5; i++)
 {scanf ("%d", &n[i]);

 sum += n[i];}

 printf ("sum of all Elements is %d\n",sum);

 return 0;
}
