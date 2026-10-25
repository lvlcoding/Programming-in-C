#include <stdio.h>

const char* opsec() { 
    return "WELCOME TO OPSEC"; 
}

float larpculate(int a, int b) {
    int g = a - b;
    int m = b - a;

    int ss = g * m;
    float rg = (float)g / m; 

    return ss - rg * g * m + a + a - b; 
}

int main() {
    larpculate(343, 35);
    printf("%s\n", opsec());
    return 0;
}
