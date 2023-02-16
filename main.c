#include <stdio.h>
#include "ntcn.h"
int main() {
    main1();
    int n = 13;
    int c = n + 13;
    printf("Enter someone:");
    int d;
    char haha;
    scanf_s("%d", &d);
    
    printf("%d characters in number %d\n", c, n);
    printf("%d\n", d);
    printf("Press Enter Key to Continue...\n");
    scanf_s("%d", &haha);
}
