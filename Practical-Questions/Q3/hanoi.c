#include <stdio.h>

//Using recursion
void hanoi(int n, char from_rod, char to_rod, char aux_rod)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
		return;
	}
	hanoi(n-1, from_rod, aux_rod, to_rod);
	printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
	hanoi(n-1, aux_rod, to_rod, from_rod);
}

int main()
{
	int n; // Number of disks
    printf(" Enter the no of disks:  ");
    scanf("%d", &n);


	hanoi(n, 'A', 'C', 'B'); // A, B and C are rods
	return 0;
}
