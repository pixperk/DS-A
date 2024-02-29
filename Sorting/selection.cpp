#include<bits/stdc++.h>
using namespace std;
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
    for(int i=0; i<=n-2; ++i){
        int min;
        min=i;
        for(int j=i; j<=n-1; ++j){
            if(a[j]<a[min])
            min=j;
        }
        int temp;
        temp = a[min];
        a[min]=a[i];
        a[i]=temp;
    }
     cout<<"\nArray after Sorting: "<<endl;
     for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
 return 0;
}