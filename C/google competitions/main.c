#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char *s, *p;
    p = (char*)malloc(sizeof(char)*1000000);
    s = (char*)malloc(sizeof(char)*1000000);
    int n, i, j, k, temp, f;
    scanf("%d\n", &n);
    for(i = 0; i < n; i++){
        scanf("%s", s);
        p = s;
        for(j = 0; j < strlen(s); j++){
            for(k = j; k < strlen(s); k++){
                if(s[k] == p[j]){
                    for(f = k; f < strlen(s); f++){
                        if(p[k] != p[f]){
                            temp = p[k];
                            p[k] = p[f];
                            p[f] = temp;
                            break;
                        }
                    }
                }
            }
        }
        // if(p == s){
        //     printf("IMPOSSIBLE\n");
        // }
        // else
        {
            printf("%s\n", p);
        }
    }
}