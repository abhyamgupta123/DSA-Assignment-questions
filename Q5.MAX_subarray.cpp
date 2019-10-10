#include <bits/stdc++.h>
using namespace std;
int summ(int * arr,int a,int b,int n)                     // defing function to get chech the sum of the given particular sub arrays.
{int total=0;
  while(a<=b)
  { total=total+arr[a];
    a++;
  }
  return total;

}
int main() {
  int n;                                              //declaring the integer to store the length of the given array.
  cout<<"Enter no of element in an array "<<endl;
  cin>>n;
  int * arr=new int(n);                           //asking for the vale of length og the given array.
  for(int i=0;i<n;i++)                      //storing the values of array elements.
   {
     cout<<"enter element number "<<i+1<<endl;
     cin>>arr[i];
   }
  int A1=0,B1=0;
  int max_sum=0;
  for(int i=0;i<n;i++)
   {
     for(int j=i;j<n;j++)
     {int temp_sum=summ(arr,i,j,n);                     // calling the sum function overhere.
      if(temp_sum>max_sum)                          //comparing the obtained sum as greater or not
      {  max_sum=temp_sum;
         A1=i;                          //storing the vales of starting index of the contigious array.
         B1=j;                          //storing the vales of ending index of the contigious array.
      }
     }
    }
    cout<<"sub array with max sum is  :   "<<max_sum<<" IS ";

    for(int i=A1;i<B1+1;i++)
     cout<<arr[i]<<" ";                                             //printing the given array as individual elememts using loop.


}
