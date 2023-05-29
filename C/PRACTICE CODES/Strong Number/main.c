#include <stdio.h>

int main(){
    int a,b, remainder, current_number, test_number, final_number, processed_number;
    current_number = 0;
    while (current_number < 99999)
    {
        processed_number = current_number;
        final_number = 0;
        while(current_number != 0){
            remainder = current_number%10;
            test_number = 1;
            while (remainder >= 1){
                test_number = test_number*remainder;
                remainder--;
            }
            final_number = final_number + test_number;
            current_number = current_number/10;
        }
        current_number = processed_number;
        if(final_number == processed_number){
        printf("%d\n", final_number );
        }
        current_number++;
    }
    return 0;
}
