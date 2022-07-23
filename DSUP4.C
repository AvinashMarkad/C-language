#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[50],n,i,j,temp;
  setbuf(stdout, NULL);
  printf("Enter the number of value in array n:\n");
  scanf("%d", &n);
  printf("Enter the elements of array:\n");
  for(i=0; i<n; i++)
  {
     scanf("%d", &a[i]);
  }
   for(i=1; i<=n-1; i++)
  {
    temp=a[i];
    j=i-1;

   while((temp<a[j])&&(j>=0))
     {

       a[j+1] = a[j];
       j=j-1;
     }
    a[j+1]=temp;
}

  printf("The sorted array after insertion sort is:\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
   system("pause");
   return 0;
}


