#include <stdio.h>
#include <string.h>

int main(void) {
    char str[500];

    scanf("%[^\n]", &str);

    printf("%s\n", (strlen(str) <= 140) ? "TWEET" : "MUTE");

    //system("pause");
    return 0;
}