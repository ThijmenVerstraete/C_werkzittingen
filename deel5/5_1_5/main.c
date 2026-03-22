#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define N 10

void fibonacci(int n1, int n2, int depth);

int main()
{
    fibonacci(0, 1, N);
    return 0;
}

void fibonacci(int n1, int n2, int depth)
{
    if (depth == 0)
    {
        return;
    }

    pid_t pid = fork();
    int n = n1 + n2;

    if (pid < 0)
    {
        fprintf(stderr, "Fork failed\n");
        return;
    }
    else if (pid == 0)
    {
        char str[20];
        snprintf(str, sizeof(str), "%d", n);

        execlp("echo", "echo", str, NULL);

        perror("execlp failed"); // only runs if exec fails
    }
    else
    {
        wait(NULL); // prevent zombies
    }

    fibonacci(n2, n, depth - 1);
}