//CODE TO FIND THIRD LARGEST NUMBER FROM GIVEN USER INPUT

#include<stdio.h>

int main(){

    int ele,temp;
    printf("Enter number of elements :" );
    scanf("%d",&ele);

    if(ele<3){
        printf("Invalid input");
    }
    else{
        int arr[ele];
        printf("Enter numbers :");
        for(int i=0;i<ele;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<ele;i++){
            for(int j=i+1;j<ele;j++){
                if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }

            }
        }
       
        printf("Third largest number is %d",arr[2]);
    }

    return 0;
}
