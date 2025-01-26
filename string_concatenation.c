#include<stdio.h>
int main() {
    char part1[]= "My name is ";
    char part2[]= "Zannatul Farzana";
    strcat(part1, part2);
    printf("Part1: %s\n", part1);
    printf("Part2: %s\n", part2);

    return 0;
}
