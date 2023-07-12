#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int a[MAX],pos,elem;
int n=0;
void create();
void display();
void insert();//hidfogjdfignfngdxofmdxofmdxofl
void delete();
void main()
{
    int choice;
    while(1)
    {
        printf("\n~~~MENU~~~");
        printf("\n1.Create an array\n2.DIsplay array\n3.Insert element\n4.Delete element\n5.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: create();
            break;
        case 2: display();
        break;
        case 3: insert();
        break;
        case 4: delete();
        break;
        case 5: exit(1);
        break;
        default: printf("Please enter a valid choice");
            break;
        }
    }
}
void create()
{
    int i;
    printf("Enter the No. of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}   
void display()
{
    int i;
    if(n==0)
    {
        printf("Array is empty.");
        return;
    }
    printf("Array elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void insert()
{
    int i;
    if(n==MAX)
    {
        printf("\nArray is full. insertion not possible.");
        return;
    }
    do
    {
        printf("Enter a valid position for element to be inserted: ");
        scanf("%d",&pos);
    } while (pos>n);
    printf("\nEnter the value to be inserted: ");
    scanf("%d",&elem);
    for ( i = n; i >= pos; i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=elem;
    n=n+1;
    display();
}
void delete()
{
    int i;
    if(n==MAX)
    {
        printf("\nArray is empty.");
        return;
    }
    do
    {
        printf("Enter a valid position for element to be deleted: ");
        scanf("%d",&pos);
    } while (pos>=n);
    elem=a[pos];
    printf("\nDeleted element is: %d\n",elem);
    for ( i = pos; i < n-1; i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    display();
}
