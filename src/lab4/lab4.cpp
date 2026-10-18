#include <iostream>
#include <iomanip>
#include <clocale>
using namespace std;

const int MAX_SIZE = 100;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int arr[MAX_SIZE];
    int size;
    int K;

    cout << "Введите размер массива (не больше 100): ";
    cin >> size;

    cout << "Введите элементы массива: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Введите K (с какого индекса начинать): ";
    cin >> K;

    if (K < 0 || K >= size)
    {
        cout << "Ошибка: K выходит за границы массива." << endl;
        return 1;
    }

    cout << "\nИсходный массив: ";
    printArray(arr, size);

    cout << "\nПросмотр влево от K (по кольцу): ";
    for (int i = 0; i < size; i++)
    {
        int index = (K - i + size) % size;
        cout << arr[index] << " ";
    }
    cout << endl;

    for (int i = size - 1; i >= 0; i--)
    {
        if (i % 5 == 0)
        {
            if (size < MAX_SIZE)
            {
                for (int j = size; j > i; j--)
                {
                    arr[j] = arr[j - 1];
                }
                arr[i + 1] = 0;
                size++;
            }
        }
    }

    cout << "\nМассив после добавления нулей: ";
    printArray(arr, size);

    cout << "\nПросмотр вправо от K (по кольцу): ";
    for (int i = 0; i < size; i++)
    {
        int index = (K + i) % size;
        cout << arr[index] << " ";
    }
    cout << endl;

    return 0;
}