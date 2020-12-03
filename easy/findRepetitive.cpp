// Question- We are given an array arr[] of size n. Numbers are from 1 to (n-1) in random order. 
// The array has only one repetitive element. We need to find the repetitive element.


// Idea 1 - use hashing
// Time= O(n)
// Space- O(n)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,2,3,4,5};
    unordered_set<int>hash;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        if(hash.find(arr[i])!=hash.end())
            cout<<arr[i];
        hash.insert(arr[i]);
    }
    return 0;

}

// Idea 2- use XOR
// Time= O(n)
// Space- O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,2,3,4,5};
    int res=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        res=res^arr[i]^(i+1);
    }
    cout<<res;
    return 0;
}
