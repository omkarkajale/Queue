#include <stdio.h>  
#include <stdlib.h>  
// Compare function for the qsort  
int compare(const void * a, const void * b) {  
   return ( *(int*)a - *(int*)b );  
}  
void reverse (int arr[], int n){  
    for(int i = 0; i < n/2; i++){  
        int temp = arr[i];  
        arr[i] = arr[n-i-1];  
        arr[n-i-1] = temp;  
    }  }  
int kthelement(int arr[], int k, int n){  
    qsort(arr, n, sizeof(int), compare);    
    reverse(arr, n);  
    return arr[k-1];  
}   
int main(){  
    int arr[] = {12, 15, 7, 3, 8, 16, 25};  
    int k,n = sizeof(arr) / sizeof(arr[0]);   
   scanf("%d",&k);
    printf("%d",k);
	//int k = 4;  
    printf("\nThe %d th largest element = %d", k, kthelement(arr, k, n));  
    return 0;  
}  

