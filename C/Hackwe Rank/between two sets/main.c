#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n, m, i,j, a,b, min;
    scanf("%d%d", &n, &m);
    int ar1[n];
    int ar2[m];
    //for scanning the elements in the first array
    for(i=0; i<n; i++){
        scanf("%d", &ar1[i]);    
    }
    //for scanning the values of the second array
    for(i=0; i<m; i++){
        scanf("%d", &ar2[i]);
    }
    //for finding the smallest element in the second array
    min = ar2[0];
    for(i=0; i<m; i++){
        min = ar2[i]<=min? ar2[i]: min;
    }
    
    
    //funtion to find the lcm of the whole first array
    i = 1;
    //if the in the code the value entered by the person in first array is bigger than the value enterd in the second array then this 
    //code will prove in work with 
    //the condtions and set the i to 0 and cuz of that the whole code wont be working and will execute the 0 as mian output of the program
    if(ar1[0]>min){
        i=0;
    }
    //since if
    else{
        while(i<min)
        {
            
            for(j=0; j<n; j++)
            {
                if(i%ar1[j] == 0)
                { 
                }
                else 
                {
                    break;
                }
            }
            if(j==n){
                break;
            }
            i++;
        }
    }
    //code to find the number between the lcm of array 1 and min elemnt of the array 2
    b = i;
    a = 0;
    while (i<=min) {
        // conditon to break from the loop if vlaue of i is zero, since i is lcm in this program
        if(i == 0){
            a=0;
            break;
        }
        
        for (j = 0; j < m; j++) 
        {
            if(ar2[j]%i == 0) 
            {  
                // printf("ar[%d] = %d, a = %d,  i = %d \n", j, ar2[j],a, i);
            }
            else 
            {
                break;
            }
        }
        if (j == m) 
        {
            a++;
        }
        i = i + b;
    }
    printf("%d", a);
}
