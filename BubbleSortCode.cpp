#include<iostream>
using namespace std;
int main()
{
int arr[]={1,2,3,4,5};
int s=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<s;i++)
{
cout<<arr[i]<<"\t";
}
int c=0;
cout<<"\nOutput of bubble sort\n";
for(int i=0;i<s;i++)
{
for(int j=0;j<s-i-1;j++)
{
int tmp;
if(arr[j]>arr[j+1])
{
tmp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=tmp;
c++;
}
}
if(c==0)
{
break;
}
}
for(int i=0;i<s;i++)
{
cout<<arr[i]<<"\t";
}
}











/*int n;
cout<<"enter size of array\n";
cin>>n;
int arr[n];
cout<<"enter "<<n<<" values\n";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"\noutput\n";
for(int i=0;i<n;i++)
{
cout<<arr[i]<<"\n";
}*/
