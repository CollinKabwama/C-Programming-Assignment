#include <stdio.h>
#include <stdlib.h>
void addarrays(int a[],int b[]);
int i;
int a[3]={2,3,4};  // a and b are the arrays and c is the array with the totals
int b[3]={5,6,7};
int c[3];
int main()
{
    addarrays(a,b);
    return 0;
}

void addarrays(int a[],int b[]){
    int *p=&c;                      // pointer variable for array c
    for(i=0;i<3;i++){
    printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<3;i++){
    printf("%d ",b[i]);

    }
    printf("\n");
    for(i=0;i<3;i++){
    c[i]=a[i]+b[i];
    printf("%d ",c[i]);


    }
    printf("\nThe address of array c is %u.",p);

}
