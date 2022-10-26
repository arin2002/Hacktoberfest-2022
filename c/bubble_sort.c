#include <stdio.h>
#include <stdlib.h>

void swap(int *vetor, int bigger, int lastPosition)
{
    int temp = vetor[lastPosition];
    vetor[lastPosition] = vetor[bigger];
    vetor[bigger] = temp;
}

void bubbleSort(int *vetor, int size)
{
    for (int i = size - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                swap(vetor, j, j + 1);
            }
        }
    }
}
int main(int argc, char **argv)
{
    int vet[5] = {-2, 6, 4, 10, 3};

    bubbleSort(vet, 5);
}