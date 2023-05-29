#include <iostream>

int main()
{
    int t, i, j, k, count1, count2;
    scanf("%d", &t);
    char s1[1000], s2[1000];
    for(i = 0; i < t; i++) {
        fgets(s1, 1000, stdin);
        fgets(s2, 1000, stdin);
        count1 = count2 = 0;
        while(j != '\0' || k != '\0') {
            count2 = count1 + (s2[j]);
            count1 = count2 + (s1[k]);
            j++;
            k++;
        }
    }
}