#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int i;

int linearsearch(int *x,int n,int item)
{
    for(i=0;i<n;i++)
    {
        if(item==x[i]){
            return i;
        }
        else{
            return -1;
        }

    }
}

int main(){
 int n,item,*p,temp;
 printf("Enter the Size of array:");
 scanf("%d",&n);
 printf("Enter the item to be searched:");
 scanf("%d",&item);
 printf("Enter the Array:");
 p=(int *)malloc(sizeof(int)*n);
 for(i=0;i<n;i++){
scanf("%d",p+i);
 }
 for(i=0;i<n;i++){
    printf("%d ",p[i]);
 }
 temp=linearsearch(&p,n,item);
 printf("%d",temp);
 return 0;
}
