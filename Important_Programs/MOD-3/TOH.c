#include <stdio.h>

void move_disks(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }

    move_disks(n - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from rod %c to rod %c\n", n - 1, from_rod, to_rod);
    move_disks(n - 1, aux_rod, to_rod, from_rod);
}
int main()
{
    printf("Enter number of disks: ");
    int n;
    scanf("%d", &n);

    move_disks(n, 'A', 'C', 'B');
    return 0;
}