/*  Insertion of a new node in linked list
                                    1) At the front of the linked list
                                    2) After a given node.
                                    3) At the end of the linked list.
*/


#include<bits/stdc++.h>
using namespace std;


void reverse_list(int *arr,int n){
    for(int i=0;i<(n/2);i++){
        swap(arr[i],arr[n-i-1]);
    }
}

    


void print_list(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}



int main(){

    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);    
    reverse_list(arr,n);
    print_list(arr,n);
}