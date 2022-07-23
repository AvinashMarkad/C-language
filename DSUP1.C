#include<stdio.h>
#include<stdlib.h>

#define MAX 10

void isInsert(int arr[], int num, int pos, int size)
{
    int i;
    if(size >= MAX)
    {
        printf("\tArray is Full...!");
    }
    for( i= size-1;  i >= pos; i--)
    {
	arr[i+1] = arr[i];
    }
    arr[pos] = num;

printf("\nArray After Insertion:\n");
	    for( i=0; i < size; i++)
	printf("%d \n", arr[i]);


}

void isDelete(int arr[], int pos, int size)
{
    int i;
    if (size>=MAX)
    {
	printf("\tArray is Empty...!");
    }
    else{

	for( i= pos; i < size-1; i++)
	{
	    arr[i]=arr[i+1];
	}
    }
}

void isDisplay(int arr[], int size)
{
    int i;

    for(i = 0; i < size; i++)
	printf("%d\t",arr[i]);

	printf("\n");
    system("pause");
}

int main()
{
    int arr[MAX] = {10, 20, 30, 40, 50};
    int ch, num, pos, size=5, del, i;
    Top:
    system("cls");
    printf("Operations on Array:\n");
    printf("Array:\t");

    for( i=0; i < size; i++)
	printf("%d ", arr[i]);

    printf("\n\n\t1.Insert\n");
    printf("\t2.Delete\n");
    printf("\t3.Display\n");
    printf("\t4.Exit\n\n");
    printf("\tEnter your Choice..!");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:

	printf("Enter location:\t");
	scanf("%d", &pos);
	printf("Enter number Which is you Inserted on Array:\t");
	scanf("%d", &num);
	size++;
	isInsert(arr, num, pos, size);
	

	goto Top;
    case 2:
	printf("Enter Index number:\t");
	scanf("%d", &del);
	size--;
	isDelete(arr, del, size);
	printf("\nArray after Deletion:\n");
	    for( i=0; i < size; i++)
	printf("%d ", arr[i]);
	goto Top;
    case 3:

	isDisplay(arr, size);
	goto Top;
    case 4:
	break;
    }
    return 0;
}
