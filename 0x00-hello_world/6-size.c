nclude <stdio.h>

/**
* main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
    char c;
    int it;
    long int li;
    long long int lli;
    float ft;

    printf("Size of a char: %zu byte(s)\n", sizeof(c));
    printf("Size of an int: %zu byte(s)\n", sizeof(it));
    printf("Size of a long int: %zu byte(s)\n", sizeof(li));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(lli));
    printf("Size of a float: %zu byte(s)\n", sizeof(ft));

    return (0);
