#include<iostream>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        std::cin>>arr[i];
    }
    for(int i=0;i<n;i++) {
        for(int j=1;j<n-i;j++) {
            if(arr[j]<arr[j-1]) {
                std::swap(arr[j],arr[j-1]);
            }
        }
    }
    for(int i=0;i<n;i++) {
        std::cout<<arr[i]<<" ";
    }
}