//given two arrays, check if the second array is the subset of the first one
//we use hash function here to create hash table of first array and then find the elements of second array
#include<bits/stdc++.h>
using namespace std;

bool isSubset(int firstArray[],int m, int secondAeray[], int n)
{
    set<int> hash;
    for(int i=0;i<m;i++)
    {
        hash.insert(firstArray[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(hash.find(secondAeray[i])==hash.end())
        {
            return false;
        }
        return true;
    }
}

int main()
{
   int firstArray[]={11,1,13,21,3,7};
   int secondAeray[]={11,3,7,1};
   int m = 6;
   int n= 4;
   if(isSubset(firstArray,m,secondAeray,n))
   {
       cout<<"yes it is the subset";
   }
   else
   {
       cout<<"no it is not subset";
   }
   return 0;
   
}
