#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void printHelp(void)
{
    printf("Calculates set bit count in 32-bit number\n"\
    "Example usage:\n\n"\
    "bitcount 4294967295\n");
}

int main(int argc, char* argv[])
{
    if (2 == argc)
    {
        if (0 == strcmp("-h", argv[1]) ||
            0 == strcmp("--help", argv[1]))
        {
            printHelp();
            return 0;
        }

        int value = atol(argv[1]);
        int bitsSet = 0;
        int i = 0;

        for (; i < 32; ++i)
        {
            bitsSet += value & (1 << i) ? 1 : 0;
        }

        printf("Value 0x%08X has %d bits set to 1\n", value, bitsSet);
        return 0;
    }
    else
    {
        printHelp();
        return 1;
    }
}
