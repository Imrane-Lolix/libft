#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_itoa.c"

int main()
{
    int inputs[] = {123, -456, 0, 1000, -1000};
    char *expected_outputs[] = {"123", "-456", "0", "1000", "-1000"};

    for (int i = 0; i < 5; i++)
    {
        char *output = ft_itoa(inputs[i]);
        printf("Input: %d\n", inputs[i]);
        printf("Output: %s\n", output);
        printf("Expected Output: %s\n", expected_outputs[i]);
        printf("Result: %s\n", strcmp(output, expected_outputs[i]) == 0 ? "PASS" : "FAIL");
        printf("\n");
        free(output);
    }

    return 0;
}
