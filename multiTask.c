#include<stdio.h>
int main(){


char arr[5] ;
printf("Enter the elements of the array:\n");

for(int i=0; i<5; i++){

  scanf(" %c", &arr[i]);


}

printf("The 2nd and third element of the array is %d %d\n", arr[1], arr[2]);



if(arr[4] == 'a' || arr[4] == 'e' ||  arr[4] == 'i' ||  arr[4] == 'o' ||  arr[4] == 'u' || arr[4] == 'A' ||  arr[4] == 'E' ||  arr[4] == 'I' ||  arr[4] == 'O' ||  arr[4] == 'U'){

    printf("The last elements is a vowel\n");

}

else{

    printf("The last element is a consonant\n");

}

     printf("The 3rd element is %c\n", arr[2]);
     printf("The 1st element is %c\n", arr[0]);
     printf("The 2nd element is %c\n", arr[1]);
     printf("The 5th element is %c\n", arr[4]);
     printf("The 4th element is %c\n", arr[3]);

}

