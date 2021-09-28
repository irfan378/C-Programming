// #include<stdio.h>

// int main(){
//     // int a=34;
//     // int* ptra = &a;
//     char a='3';
//     char* ptra=&a;
//     // printf("%d\n", ptra);
//     // printf("%d\n", ptra+2);
//     // printf("%d\n", ptra++);
//     // printf("%d\n", ptra+2);
//     printf("%d\n", ptra);
//     ptra--;
//     printf("%d\n", ptra);
//     printf("%d\n", ptra-2);
//     return 0;
// }
#include<stdio.h>

int main(){
    int arr[]= {311,52,3,4,5,6,67};
    int *arrayptr = arr;
    printf("value at position 3 of the array is %d\n",arr[3]);
    printf("The adress of first element of the array is %d\n",&arr[0]);
    printf("The adress of first element of the array is %d\n",arr);
    printf("The adress of second element of the array is %d\n",&arr[1]);
    printf("The adress of second element of the array is %d\n",&arr+1);
    printf("The adress of third element of the array is %d\n",&arr[2]);
    printf("The adress of third element of the array is %d\n",&arr+2);
    
    printf("The value at adress of first element of the array is %d\n",*(&arr[0]));
    printf("The value at adress of first element of the array is %d\n",*&arr[0]);
    printf("The value at adress of first element of the array is %d\n",*(arr));
    printf("The value at adress of second element of the array is %d\n",*(&arr[1]));
    printf("The value at adress of second element of the array is %d\n",*&arr[1]);
    printf("The value at adress of second element of the array is %d\n",*(arr+1));
    
    return 0;
}