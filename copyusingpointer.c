#include <stdio.h>

void copy(char *q, char *p) {
    while (*p != '\0') {
        *q = *p;
        q++;
        p++;
    }
    *q = '\0'; 
};

int main() {
    char s1[10];
    char s2[10];
    scanf("%s", s2);
    copy(s1, s2);
    printf("%s\n", s1);
    return 0;
}


