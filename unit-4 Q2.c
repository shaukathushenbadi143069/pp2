#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, spaces = 0, tabs = 0, lines = 0;

    // Open file in read mode
    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == ' ')
            spaces++;
        else if (ch == '\t')
            tabs++;
        else if (ch == '\n')
            lines++;
    }

    fclose(fp);

    // Display results
    printf("Total characters = %d\n", characters);
    printf("Total spaces = %d\n", spaces);
    printf("Total tabs = %d\n", tabs);
    printf("Total lines = %d\n", lines);

    return 0;
}6
