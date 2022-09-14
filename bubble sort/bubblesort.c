#include <stdio.h>
#include <string.h>
void bubble_sort(int* numbers, int size);
struct name{
    char name[10];
};
int main(void)
{
    int size;
    int numbers[size - 1];
    //take the size of the array from user.
    printf("Select the size of the array: ");
    scanf("%i", &size);
    for(int i = 0; i < size; i++ )
    {
        printf("Enter the %ith value: ", i + 1 );
        scanf("%i", &numbers[i]);
    }
    bubble_sort(numbers,  size);
    for(int i = 0; i < size; i++ )
    {
        printf("%i, ", numbers[i]);
    }
    
}
void bubble_sort(int* numbers, int size)
{
    int temp, count = -1;
    while( count != 0 )
    {
        count = 0;
        for( int i = 0; i < size - 1; i++ )
        {
            if(numbers[i] > numbers[i + 1])
            {
                temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;
                //
                count++;
            }
        }
    }

}