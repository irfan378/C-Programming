#include<stdio.h>
// int sum(int arr[]){
//     int sum_of_array=0;
//     for (int i = 0; i < 4; ++i)
//     {
//         sum_of_array+=arr[i];
//     }
// }
void display(int* ptr){
    printf("%d",*ptr);
}
int main(){
    // int result,array[]={23,33,44,55};
    // result=sum(array);
    // printf("Result=%d",result);
    int arr[]={1,2,3,4};
    for (int i = 0; i < 4; i++)
    {
        display(&arr[i]);
    }
    
    
    return 0;
}