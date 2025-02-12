#include <stdio.h>
#include <stdlib.h>
int main() {
    int hashmats_army, opponents_army;
    while (scanf("%d %d", &hashmats_army, &opponents_army) == 2) {
        if (hashmats_army >= opponents_army) {
            printf("%d\n", hashmats_army - opponents_army);
        } else {
            printf("%d\n", opponents_army - hashmats_army);
        }
    }
return 0;
}