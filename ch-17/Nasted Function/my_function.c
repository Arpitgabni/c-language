// TNRS
int inputInt()
{
    int n;

    scanf("%d", &n); // 5

    return n; // 5
}

// TSRN
void arrayOutput(int len, int array[])
{
    printf("\n\nArray Output\n\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d\t", array[i]);
    }
}

void arrayInput(int len, int array[])
{
    printf("\n\nArray Input\n\n");
    for (int i = 0; i < len; i++)
    {
        printf("Enter element : ");
        array[i] = inputInt();
    }

    arrayOutput(len, array); // Nasted Function
}