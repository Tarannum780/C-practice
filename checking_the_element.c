#include<stdio.h>

int main(){
    int n ;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);



int arr[n];
printf("Enter the elements of the array:\n");


        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }

        for(int i=0; i<n; i++){
            printf("The elements are %d\n", arr[i]);
        }



        int middleElement = arr[n/2];


        if(middleElement % 2 == 0){
            printf("The middle element is even\n");
        }
        else{
            printf("The middle element is odd\n");
        }



        int temp = arr[0];
        arr[0] = arr[n-1];
        arr[n-1] = temp;




            printf("After interchanging the first and last elements are %d %d\n", arr[0], arr[n-1]);



        for(int i=0; i<n; i+=2){

            printf("After alternating the elements are %d\n", arr[i]);
        }




}
