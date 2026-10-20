#include<stdio.h>
int main(){

    int n;
    printf("Enter no. of elements in array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements: \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i =0;i<n;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[min_index];
        arr[min_index]=arr[i];
        arr[i]=temp;
    }

    printf("Sorted array elements:\n");
    for(int i =0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}