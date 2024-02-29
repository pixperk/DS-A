#include<bits/stdc++.h>
using namespace std;
void bubble(int n, int a[]){
    for(int i=n-1; i>=1; --i){
        int didSwap =0;
        for(int j=0; j<=i-1; ++j){
            if(a[j]>a[j+1]){
            int temp;
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            didSwap=1;
        }
        }
        if(didSwap==0){
            break;//improves time complexity
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
    bubble(n, a);
    cout<<"\nArray after Sorting: "<<endl;
     for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
 return 0;
}