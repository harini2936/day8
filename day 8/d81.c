#include <stdio.h>
int main()
{
    int arr1[]={1,2,3,4};
    int arr2[]={5,6,7,8};
    int a1=sizeof arr1 / sizeof (arr1[0]);
    int a2=sizeof arr2/sizeof(arr2[0]);
    int x=a1+a2;
    int result[x];
    for( int i=0;i<a1;i++){
        result[i]=arr1[i];
    }
    for(int i=0;i<x;i++){
        printf("%d\n",result[i]);
    }
  
    return 0;
}