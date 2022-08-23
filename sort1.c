#include <stdio.h>
#include <stdlib.h>
void selectionSort(int a[], int n)
{
    int min , temp;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] <= a[min])
            {
                min = j;
            }
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}
void Display(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void file(int n,char name[])
{
    int a[100000];
    FILE *file = fopen(name, "r");
    for (int i = 0; i < n; i++)
    {
        fscanf(file, "%d", &a[i]);
    }
    selectionSort(a, n);
    fclose(file);
    Display(a, n);

}

int main()
{
    int number;
    char name[10];
    scanf("%[^\n]%*c",name);
    scanf("%d", &number);
    file(number,name);
}