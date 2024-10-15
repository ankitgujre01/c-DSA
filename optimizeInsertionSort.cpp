//insertion sort
#include<iostream>
using namespace std;
int main()
{
int arr[]={6,5,4,3,2,1,1};
int sorted,tmp;
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++)
{
cout<<arr[i]<<"\t";
}
cout<<"\n";
int cnt = 0;
for(int i=1;i<n;i++)
{
sorted=i;
while(sorted>0 && arr[sorted]<arr[sorted-1])
{
tmp=arr[sorted-1];//1
arr[sorted-1]=arr[sorted];//2
arr[sorted]=tmp;
sorted--;
cnt++;
}
}
cout<<"\n after insertion sort\n";
for(int i=0;i<n;i++)
{
cout<<arr[i]<<"\t";
}
cout<<"\n count = "<<cnt;
}
