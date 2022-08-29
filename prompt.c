#include <stdio.h>
int main(void)
{
char *buffer = NULL;
ssize_t read_num;
size_t n = 0;
printf("@ ");
read_num = getline(&buffer, &n, stdin);
printf("###%s\n", buffer);
printf("%ld\n", read_num);
}
