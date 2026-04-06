#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    // Writing to file
    fp = fopen("example.txt", "w");  // open file in write mode
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter some text to write into the file:\n");
    fgets(data, sizeof(data), stdin);  // take input from user

    fprintf(fp, "%s", data);  // write to file
    fclose(fp);  // close file

    // Reading from file
    fp = fopen("example.txt", "r");  // open file in read mode
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nContent of the file:\n");

    while (fgets(data, sizeof(data), fp) != NULL) {
        printf("%s", data);  // print file content
    }

    fclose(fp);  // close file

    return 0;
}
