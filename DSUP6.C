#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a[50],n,min,loc,i,j,temp=0;
  setbuf(stdout, NULL);
  printf("Enter the number of value in array n:\n");
  scanf("%d", &n);
  printf("Enter the elements of array:\n");
  for(i=0; i<n; i++)
  {
     scanf("%d", &a[i]);
  }

   for(i=0;i<n-1;i++)
   {
     min = a[i];
     loc=i;
     for(j=i+1;j<n;j++)
     {

     if (min>a[j])
     {
      min=a[j];
      loc=j;
     }
   }
       temp = a[i];
       a[i] = a[loc];
       a[loc] = temp;

   }

  printf("The sorted array after selection sort is:\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
   system("pause");
   return 0;
}

