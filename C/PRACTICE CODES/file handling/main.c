#include <stdio.h>
int main(){
    FILE *file;
    char string[300];
    if(file = fopen("XYZ ", "a+")){
        while(fscanf(file, "%s", string) !=  EOF){
            printf("%s", string);
        }
        fputs("ABC ", file);
    }
    printf("my name is  %s", string);
    fclose(file);
    return 0;
}