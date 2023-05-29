#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i, j, rem,sum,total, index1, index2, index3, tempNum;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    int arr[n], bkt1[n], bkt2[n], bkt3[n];
    index1 = index2 = index3 = 0;
    for ( i = 0; i < n; i++)
    {
        // for taking input
        scanf("%d", &arr[i]);

        //code to find the robinson's number
        tempNum = arr[i];
        total = 0;
        while(tempNum != 0){
            rem = tempNum%10;
            sum = 1;
            for(j = 1; j <= rem; j++ ){
                sum = sum*j;
            }
            total = total + sum;
            tempNum = tempNum/10;
        }
        if(total == arr[i]){
            bkt1[index1] = total; 
            index1++;
        }

        // code to find the perfect number
        tempNum = arr[i];
        total = 0;
        while(tempNum != 0){
            if(arr[i]%tempNum == 0 && tempNum != arr[i]){
                total = total + tempNum;
            }
            tempNum--;
        }
        if (total == arr[i]){
            bkt2[index2] = total;
            index2++;
        }
        
        // code for palindrome number
        tempNum = arr[i];
        total = 0;
        while(tempNum != 0){
            rem = tempNum%10;
            tempNum = tempNum/10;
            total = total*10 + rem;
        }
        if (total == arr[i]){
            bkt3[index3] = total;
            index3++;
        }
    }

    for(i = 0; i < index1; i++){
        printf("robinsons: %d\n", bkt1[i]);
    }
    for(i = 0; i < index2; i++){
        printf("pefect: %d\n", bkt2[i]);
    }
    for(i = 0; i < index3; i++){
        printf("palindrome: %d\n", bkt3[i]);
    }
}