#include <stdio.h>
#include <ctype.h>

typedef void (*CaseFunction)(char*);

void convertlow(char* str) {
    for (char* s = str; *s; ++s) {
        *s = tolower(*s);
    }
}

void converthigh(char* str) {
    for (char* s = str; *s; ++s) {
        *s = toupper(*s);
    }
}

void changeCase(char* str, int flag, CaseFunction toLower, CaseFunction toUpper) {
    if (flag == 0) {
        toLower(str);
    }
    else if (flag == 1) {
        toUpper(str);
    }
}

int main() {
    char usrstring[100];
    int flag;

    printf("Enter a string: ");
    fgets(usrstring, sizeof(usrstring), stdin);

    printf("Enter 0 for lowercase, 1 for uppercase: ");
    while ((getchar()) != '\n');
    scanf("%d", &flag);

    changeCase(usrstring, flag, convertlow, converthigh);
    printf("Converted string: %s\n", usrstring);

    return 0;
}
