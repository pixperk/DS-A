#include<bits/stdc++.h>
using namespace std;
    int secondLargest(int a[], int n){
        int largest = a[0];
        int slargest = -1;
        for(int i=1; i<n; i++){
            if(a[i]>largest){
                slargest=largest;
                largest = a[i];
            }
            else if (a[i]!=largest && a[i]>slargest)
            {
                slargest=a[i];
            }
            
        }
        return slargest;
    }

    int secondSmallest(int a[], int n){
        int smallest = a[0];
        int ssmallest = INT_MAX; 
        for(int i=1; i<n; i++){
            if(a[i]<smallest){
                ssmallest = smallest;
                smallest = a[i];
            }
            else if (a[i]!=smallest && a[i]<ssmallest)
            {
                ssmallest=a[i];
            }
        }
        return ssmallest;
    } 

    int checkSorted(int a[], int n){
        for(int i=1; i<n; i++){
            if (a[i] >= a[i-1]){

            }
            else{
                return false;
            }
        }
        return true;
    }

int uniqueElementCount(int a[], int n){
    int i=0;
    for(int j=1; j<n; j++){
        if(a[i]!=a[j]){
            a[i+1]=a[j];
            i++;
        }
    }
    return (i+1);
}
    int main()
{      int n;
    cout<<"Enter your array size: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter your array elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Array before Sorting: "<<endl;
     for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
     }
    cout<<"\nSecond Largest element : "<<secondLargest(a,n)<<endl;
    cout<<"\nSecond Smallest element : "<<secondSmallest(a,n)<<endl;
    cout<<"Is the array sorted? "<<checkSorted(a,n)<<endl;
    cout<<"Number of unique elements: "<<uniqueElementCount(a,n)<<endl;
     
 return 0;
} 