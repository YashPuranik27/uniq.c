#include <stdio.h>
#include <string.h>
#define words 5
#define MAX_WORD 50
#define ONE 1
#define ZERO 0

int main() {
    int l;
    int y;
    int i;
    long int e = 0;
    int N = 0;
    char string[words][MAX_WORD] = {""};
    i=0;
    y=0;
    while(y < words) {
        if (!fgets (string[y], sizeof string[y], stdin)) {
            break;
        }
        int len = strlen(string[y]);
        if (string[y][len-ONE] == '\n' && e == ZERO) {
            string[y][len--] = 0;
        }
        y++;
    }
    N = i;
    putchar('\n');
    int count = ONE;
    l = ONE;
    int c = l;
    while(l < words){
      if(c<words){
        if (strcmp(string[l-ONE],string[l]) == ZERO){
            count += ONE;
            if (l == N-ONE){
                printf ("%d %s\n", count, string[l-ONE]);
                return 0;
            }
        }
        else if(strcmp(string[l-1],string[l]) != 0){
            printf ("%d %s\n", count, string[l-ONE]);
            count = ONE;

        }
      }

        l++;
    }
    return 0;
}
