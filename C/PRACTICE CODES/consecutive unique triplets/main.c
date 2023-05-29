#include <stdio.h>
int main(){
    int n, i , j, count;
    printf("enter your size of your string: ");
    scanf("%d", &n);
    char str[n], arr[3];
    printf("enter your string: ");
    scanf("%s", str);
    i = 0;
    while (i+ 2< n)
    {
        if (str[i] != str[i+1] != str[i+2])
        {
            arr[0] = str[i];
            arr[1] = str[i + 1];
            arr[2] = str[i + 2];
        }
        else{
            i++;
            continue;
        }
        count = 0;
        for(j = i; j + 2 < n; j++){
            if(arr[0] == str[j] && arr[1] == str[j + 1] && arr[2] == str[j + 2]){
                count++;
            }
        }
        if(count > 1){
            printf("%c%c%c occurs %d times\n", arr[0], arr[1], arr[2], count);
        }
        i++;
    }
    
}