#include <iostream>
#include <cstring>
using namespace std;


int main() {
    int tests;
    scanf("%d", &tests);
    char input[10000];
    for(int k = 0; k < tests; k++) {
        scanf("%s", input);

        for(int i = 0; i < strlen(input); i += 2) {
            printf("%c", input[i]);
        }
        printf(" ");
        for(int i = 1; i < strlen(input); i += 2) {
            printf("%c", input[i]);
        }
        printf("\n");
    }
    return 0;
}