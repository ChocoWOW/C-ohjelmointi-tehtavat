#include <iostream>

template <typename T>
void bubbleSort(T arr[], int size) 
{
    for (int i = 0; i < size - 1; ++i) 
    {
        for (int j = 0; j < size - i - 1; ++j) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    
    float floatArray[] = {4.5, 2.0, 7.1, 1.3, 3.8};
    int floatSize = sizeof(floatArray) / sizeof(floatArray[0]);

    
    printArray(floatArray, floatSize);

    bubbleSort(floatArray, floatSize);

    
    printArray(floatArray, floatSize);

    
    int intArray[] = {10, 4, 8, 2, 6};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);

    
    printArray(intArray, intSize);

    bubbleSort(intArray, intSize);

    
    printArray(intArray, intSize);

    return 0;
}
