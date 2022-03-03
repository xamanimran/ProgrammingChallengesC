#include<iostream>
using namespace std;

int peakElement(int arr[], int n)
{
   // Your code here
   int peak = arr[0];
   int index = 0;
   for(int i = 1; i<n; i++){
       if(arr[i]>peak){
           peak = arr[i];
           index=i;
       }
       
   }
   return index;
}

void main(){
    
}