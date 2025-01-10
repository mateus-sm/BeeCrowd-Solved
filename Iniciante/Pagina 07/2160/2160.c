#include <stdio.h>
#include <string.h>

int main(void) {
    char str[500];

    scanf("%[^\n]", &str);

    printf("%s\n", (strlen(str) <= 80) ? "YES" : "NO");

    //system("pause");
    return 0;
}