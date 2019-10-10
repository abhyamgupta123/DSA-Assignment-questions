#include <bits/stdc++.h>
using namespace std;
//i am defining the whole function in only the main function.
int main()
{
  int n;
  cout<<"Enter no of Element in an array  "<<endl;;      //declaring the no. of elements in the array.
  cin>>n;
  int * array=new int(n);                        //declaring the new interger array
  for(int a=0;a<n;a++)
  {cout<<"ENTER ELEMENT NO "<<a+1<<endl;;
   cin>>array[a];                               //inserting the elements in the given array.
   }
   int sum1;
   int sumo=0;
   cout<<"ENTER SUM YOU WANT TO FIND  " <<endl;;
    cin>>sum1;                          //obtainng the given given sum.
   int i,j,k,l;                       //declring the new 4 elements integers of interger elements

   for(i=0;i<n;i++){

     for(j=i+1;j<n;j++){

       for(k=j+1;k<n;k++){

         for(l=k+1;l<n;l++){

            sumo=array[i]+array[j]+array[k]+array[l];

           if(sumo==sum1)             //comparing the given sum with the obtained sum to check that whether the array obtained is right or not.
              { cout<<array[i]<<" "<<array[j]<<" "<<array[k]<<" "<<array[l]<<endl;   //printing the obtained elements i.e. required answer.

            }

          }
        }
      }
    }
  }
