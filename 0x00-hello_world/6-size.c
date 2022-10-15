#include <stdio.h>
/**
*main -is the entry point for the program.
*
*Return:zero if no error, Non-zero values for errors.
*/
int main(void)
{
		printf("Sizeof a char: %ld byte(s)\n", sizeof(char));
			printf("Sizeof an int: %ld byte(s)\n", sizeof(int));
				printf("Sizeof a long int: %ld bytes(s)\n", sizeof(long int));
					printf("Sizeof long long int: %ld byte(s)\n", sizeof(long long int));
						printf("Sizeof a float int: %ld byte(s)\n", sizeof(float));
							return (0);
}
