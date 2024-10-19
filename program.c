#include <cs50.h>
#include <stdio.h>

float average(int length, int array[]);

int main (void)
{
  int N;
  printf("Enter Array length: ");
  scanf("%i", &N);
  
  int scores[N];
  for (int i =0; i < N; i++)
  {
  	//scores[i] = get_int("Score %i: ", i + 1);
  	        printf("Score %i: ", i + 1 );

  	        scanf("%i", &scores[i]);

  }
  
  printf("Average: %.1f\n", average(N, scores));
  
}

float average(int length, int array[])
{
   int sum = 0;
   for (int i =0; i < length; i++)
   {
       sum+= array[i];
   }
   return (float) sum / (float) length;
}
