#include <iostream>
using namespace std;

// Fungsi untuk melakukan Shell Sort
void shellSort(int arr[], int n) {
    // Mengatur interval awal
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // Membandingkan dan menukar elemen pada interval yang ditentukan
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main() {
    int data[] = {9, 8, 3, 7, 5, 6, 4, 1};
    int size = sizeof(data) / sizeof(data[0]);

    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    shellSort(data, size);

    cout << "Array setelah diurutkan (ascending): ";
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}
