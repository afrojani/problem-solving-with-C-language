#include<stdio.h>
int findMedian(int n,int nums[])
{
    int summ=0;
    int i;
    for(i=0;i<n;i++)
    {
        summ+=nums[i];
    }
    return summ;
}
int main()
{ 
    int ara[]= {12,13,14,15,16,17,18};
    int summ= findMedian(7,ara);
    printf("the sum is %d\n",summ);
    return 0;
}