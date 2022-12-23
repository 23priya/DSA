//find index

#include <iostream>
using namespace std;
int binary_search(int arr[], int n , int key){
    int s=0;
    int e=n-1;
    
    while(s<=e){
        int mid=(s+e)/2;
        
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e= mid-1;
        }
        else{
            s= mid+1;
        }
    }
    
    return -1;
}
int main()
{
   
   int arr[]={10,20,30,40,50,60,70,89};
   int n=sizeof(arr)/sizeof(int);
   
   int key;
   cin>>key;
   
   int index= binary_search(arr,n,key);
   if(index!=-1){
       cout<<key<<"is present at index "<<index<<endl;
    }
   else{
       cout<<key<<"is not present at index "<<endl;
    }
    
    return 0;
}


//reversearray
#include <iostream>
using namespace std;
void reverseArray(int arr[], int n){
    int s=0;
    int e=n-1;
    
    while(s<e){
        int mid=(s+e)/2;
        swap(arr[s],arr[e]);
        s += 1;
        e -= 1;
    }    
}
int main()
{
   int i;
   int arr[]={10,20,30,40,50,60,70,89};
   int n=sizeof(arr)/sizeof(int);
   
   for(i=0; i<n; i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   reverseArray(arr,n);
   for(i=0; i<n; i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}


