//josty oh me!

#include <stdio.h>
#include <stdlib.h>

void main() 
{
    int jost;
    char charrr;
    FILE *fptr;

    fptr = fopen("josty oh me!.txt", "a");

    if (fptr == NULL) 
    {
        printf("error");
        exit(1);
    }
    while(1)
    {
        for (jost=0;jost<19999988;jost++) 
        {
            fprintf(fptr, "josty oh me! josty oh me! josty oh me! josty oh me! josty oh me! josty oh me! josty oh me! josty oh me! josty oh me! josty oh me! josty oh me! josty oh me! josty oh me! josty oh me! josty oh me! ", charrr);
        }
    }
    return 0;
}
