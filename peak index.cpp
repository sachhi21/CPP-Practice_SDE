#include<iostream>
using namespace std;

int peak(int arr[], int n){
  int high=n-1;
     int low=0;
     while(low<high){
     int mid= (low+high)/2;
     if(arr[mid]<arr[mid+1]){
        low=mid+1;
     }else
     {
        high=mid;
     }
     
         
    }
  return low;
}
int main(){
    int arr[4]={0,2,1,0};
    cout<<peak(arr,4);

}