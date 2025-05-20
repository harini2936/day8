#include <stdio.h>
int main()
{
    int size=5;
    int sub=5;
    int roll[size];
    int mark[size][sub];
    int total[size];
    printf("enter 5 roll number:");
    for(int i=0;i<size;i++){
        scanf("%d",&roll[i]);
    }
    for(int i=0;i<size;i++){
        printf("enter all the marks of person %d:",i+1);
        for(int j=0;j<sub;j++){
            scanf("%d",&mark[i][j]);
        }
    }
    for( int i=0;i<size;i++){
        int sum=0;
        for( int j=0;j<sub;j++){
            sum=mark[i][j];
    }
    total[i]=sum;
    }
    printf("\t--------mark sheet---------");
    printf("rollno\tenglish\ttamil\tmaths\tscience\t social science");
    for(int i=0;i<size;i++){
        printf("%d",roll[i]);
        for(int j=0;j<sub;j++){
            printf("%d\t",mark[i][j]);
        }
        printf("%d\n",total[i]);
    }
    return 0;
}
