#include <iostream>

using namespace std;



void insertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int pivo = arr[i];
        int j = i - 1;

        while(j>=0 && arr[j]>pivo)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = pivo;
    }
}



int main()
{
    
    int v[] = {25, 30, 2, 7, 23, 5};
    int size = sizeof(v)/sizeof(v[0]);

    cout << "Vetor antes do insertionSort: ";
    for(int i=0; i<size; i++) cout << v[i] << " ";

    insertionSort(v, size);

    cout << endl << "Vetor depois do insertionSort: ";
    for(int i=0; i<size; i++) cout << v[i] << " ";


return 0;
}