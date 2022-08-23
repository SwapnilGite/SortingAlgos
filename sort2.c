#include <stdio.h>
#include <stdlib.h>
void insertionSort(int a[], int n)
{
    int j, key;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
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
void file(int n, char name[])
{
    int a[100000], i;
    FILE *file = fopen(name, "r");
    for (i = 0; i < n; i++)
    {
        fscanf(file, "%d", &a[i]);
    }
    insertionSort(a, n);
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