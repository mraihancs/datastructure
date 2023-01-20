#include<stdio.h>
int main(){
int n;
int key=5;
int count=0;
scanf("%d\n",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("\n");
for(int i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}
for(int i=0;i<n;i++)
{
    if(arr[i]== key)
    {
        count=1;
    }
}
printf("\nResult: ");

if(count==1)
{
    printf("Found\n");
}
else
{
    printf("\nNot Found");
}
}
