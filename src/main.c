#include <stdio.h>

void other(void);
void input(void);

int main(void)
{
    input();
    return 0;
}


void other(void)
{
    printf("You're a naughty boi who overflowed my buffer (͡° ͜ʖ ͡°)\n");
	fflush(stdout);
}


void input(void)
{
    char buffer[10];
    printf("Enter your input:\n");
    scanf("%s", buffer);
    printf("Your input: %s\n", buffer);
}
