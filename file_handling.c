#include<stdio.h>
#include<curses.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,n,num[100000];
    time_t t;
    FILE *file;
    srand((unsigned) time(&t));
    file = fopen("file.txt","a");
    if(!file)
        return 0;
   
    for(i=0;i<100000;i++)
    {
        n = rand() % 10000;
        // printf("%d ",n);
        fprintf(file,"%d\n",n);
    }
    fclose(file);    
  
}