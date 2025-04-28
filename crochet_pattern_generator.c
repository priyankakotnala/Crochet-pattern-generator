#include <stdio.h>
#include <string.h>

int main() {
    int num_stitches;
    char stitches[100][50]; 
    int rows, stitches_per_row;
    int i, j;
    int stitch_counter = 0;

    printf("Welcome to the Crochet Pattern Generator!\n");

    printf("How many stitch types would you like to add? ");
    scanf("%d", &num_stitches);
    getchar(); 

    for (i = 0; i < num_stitches; i++) {
        printf("Enter stitch type %d: ", i + 1);
        fgets(stitches[i], sizeof(stitches[i]), stdin);
        stitches[i][strcspn(stitches[i], "\n")] = 0; 
    }

    printf("\nEnter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of stitches per row: ");
    scanf("%d", &stitches_per_row);

    printf("\n=== Your Crochet Pattern ===\n\n");

    for (i = 1; i <= rows; i++) {
        printf("Row %d: ", i);
        for (j = 1; j <= stitches_per_row; j++) {
            printf("%s ", stitches[stitch_counter % num_stitches]);
            stitch_counter++;
        }
        printf("\n");
    }

    printf("\nHappy Crocheting! \n");

    return 0;
}

