#include<bits/stdc++.h>
using namespace std;
void insertion(int n, int a[]){
    for(int i=0; i<n; ++i){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
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
    insertion(n, a);
    cout<<"\nArray after Sorting: "<<endl;
     for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
 return 0;
}