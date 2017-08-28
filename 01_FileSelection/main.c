#include <stdio.h>

int main(int argc, char **argv)
{
    char file[1024];
    
    FILE *f = popen("zenity --file-selection", "r");

    fgets(file, 1024, f);

    printf("open: %s", file);
}