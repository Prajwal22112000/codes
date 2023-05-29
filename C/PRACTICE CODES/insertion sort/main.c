#include <stdio.h>
#include <stdlib.h>
int main(){
    int q[100], size, key, temp, i, current;
    printf("enter the size of the array\n");
    scanf("%d", &size);
    printf("enter the %d value(s) for the array\n", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &q[i]);
    }
    printf("array after performing insertion sort\n");

    for(key = 1; key < size; key++)
    {
        current = key;
        // printf("key = %d\n", key);
        for(i = current - 1; i >= 0; i--)
        {
            if (q[key] < q[i])
            {
                temp = q[key];
                q[key] = q[i];
                q[i] = temp;
                // printf("changed %d\t with %d\ti = %d\tkey = %d\t\n", q[i], q[key], i, key);
            }
            else if (q[key] >= q[i])
            {
                break;
            }
            key = key - 1;
        }
        key = current;
    }

    for ( i = 0; i < size; i++)
    {
        printf("%d\n", q[i]);
    }
    
    return 0;
}