#include<stdio.h>

int main(){
    int i,element,found;
    int arr[5]= {10,20,30,40,50};
    
    printf("Enter Element to search: ");
    scanf("%d",&element);
    
    for(i=0;i<5;i++){
        if(arr[i]==element){
            found = 1;
            printf("Element Found at %d Position",i);
            break;
        }
    }
    printf("\n");
    if(!found)
        printf("Element Not Found");

}