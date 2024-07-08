#include <stdio.h>
#include <string.h> 

#define max_categories 8

int main() {
    int numCategories;
    double currentGrade = 0.0;
    double potentialGrade = 0.0;

    printf("Enter the number of grade categories maximum eight: ");
    scanf("%d", &numCategories);

    char categoryNames[max_categories][50];
    double categoryWeights[max_categories];
    double categoryGrades[max_categories];

    getchar();

    for (int i = 0; i < numCategories; ++i) {
        printf("Enter the name of category %d: ", i + 1);
        fgets(categoryNames[i], sizeof(categoryNames[i]), stdin);
        categoryNames[i][strcspn(categoryNames[i], "\n")] = '\0';

        printf("Enter the weight (in percentage) for %s: ", categoryNames[i]);
        scanf("%lf", &categoryWeights[i]);

        printf("Enter the grade (out of 100) for %s (-1 if unknown): ", categoryNames[i]);
        scanf("%lf", &categoryGrades[i]);

        if (categoryGrades[i] >= 0) {
            currentGrade += (categoryWeights[i] / 100) * categoryGrades[i];
        }
        else {
            potentialGrade += (categoryWeights[i] / 100) * (100.0 - currentGrade);
        }
    }

    printf("\nCurrent grade: %.2lf\n", currentGrade);
    printf("Potential grade for remaining project grades: %.2lf\n", potentialGrade);

    return 0;
}

