#include <stdio.h>

int main()
{
  int array[20], n, i, j, position, t;int count;

  printf("Enter number of elements\n");
  count++;
  scanf("%d", &n);
  count++;

  printf("Enter %d integers\n", n);
  count++;

  for (i = 0; i < n; i++,count++){
    scanf("%d", &array[i]);
    count++;
    }

  for (i = 0; i < (n - 1); i++,count++) // finding minimum element (n-1) times
  {
    position = i;
    count++;

    for (j = i + 1; j < n; j++,count++)
    {
      if (array[position] > array[j]){
        count++;
        position = j;
        count++;
        }
    }
    if (position != i)
    {
      count++;
      t = array[i];
      array[i] = array[position];
      array[position] = t;
      count+3;
    }
    count++;
  }

  printf("Sorted list in ascending order:\n");
  count++;

  for (i = 0; i < n; i++,count++){
    printf("%d\n", array[i]);
    count++;
    }
count++;
printf("Time Complexity is: %d",count);
  printf("The space complexity is: 100");
  return 0;
}
