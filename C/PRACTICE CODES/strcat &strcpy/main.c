#include <stdio.h>
#include <stdlib.h>

int main()
{   char yourname[40] , hersname[39] , xyz[1999] = "";

    puts( "what is your name ?");
    gets(yourname);
    puts("what is her name ?");
    gets(hersname);

    strcat(xyz, yourname);
    strcat( xyz, " loves ");
    strcat(xyz, hersname);

    puts(xyz);

    return 0;
}
