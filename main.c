#include "tower.h"

int main(void)
{
	system("CLS");
	int n = 0;
	double i = 0;
	printf("Enter the number of disks for the program to excute: ");
	scanf("%d", &n);

	printf("\nThe order of moves required to resolve the puzzle are:\n");

	towerMoves(n, 'A', 'C', 'B'); //These chars equal towers

	i = pow(2, n); //2^n - 1
	i = i - 1; 

	text_color(GREEN);
	printf("\n\nTotal moves: %0.1lf\n", i);
	text_color(WHITE);
	printf("\n");

	return 0;
}

void towerMoves(int nlocal, char L, char M, char R)
{
	if (nlocal == 1) 
	{
		printf("\nMove disk no. 1 from column %c to column %c", L, M);
		return;
	}
	else
	{
		towerMoves(nlocal - 1, L, R, M);

		printf("\nMove disk no. %d from column %c to column %c", nlocal, L, M);

		towerMoves(nlocal - 1, R, M, L);
		return;
	}
}

/************************************************************
* Function: text_color(int)
* Date Created: Nov. 10, 2018
* Date Last Modified: Nov. 10, 2018
* Description: Change Text Color
* Input parameters:  Enum Int #
* Returns: -
* Preconditions: -
* Postconditions: -
*************************************************************/
void text_color(i)
{
	printf("%c[%dm", 0x1B, i + 30);
}

/************************************************************
* Function: back_color(int)
* Date Created: Nov. 10, 2018
* Date Last Modified: Nov. 10, 2018
* Description: Change Background Color
* Input parameters: Enum Int #
* Returns: -
* Preconditions: -
* Postconditions: -
*************************************************************/
void back_color(i)
{
	printf("%c[%dm", 0x1B, i + 40);
}
