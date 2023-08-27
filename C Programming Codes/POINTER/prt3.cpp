#include <stdlib.h>
 #include <stdio.h>

double average(int *array, int);

 int main()
 {
    int n, i;
    int *measurements;
    double avg;

    printf("Number of measurements?\n");
    scanf("%d", &n);

    measurements = (int *)malloc(n * sizeof(int));

    for(i=0; i<n; i++) {
		      printf("%d. measurement value? ", i+1);
			  scanf("%d", measurements + i);   }

    avg = average(measurements, n);

   printf("Average of the measurements: %.3f\n", avg);
   system("pause");
   return  0;
 }

 double average(int *array, int size)
 {
    int i, sum = 0;
    double avg;
    for(i=0; i<size; i++) 
           { 
             printf(" %d\n",*array);
             sum += *array;
             array++;
           }            
    avg = (double) sum / size;

   return avg;
 }

