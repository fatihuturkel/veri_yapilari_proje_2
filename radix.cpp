/**
* @file veri_yapilari_proje_2
* @description veri.txt'den okunan veriler istenilen aðaç islemleri doðrulsunda ekrana cýktý verir.
* @course 2. Öðretim B
* @assignment 2
* @date 22.12.2022
* @author Fatih Uyvar Turkel fatihuyvar@gmail.com
*/
#include "Radix.h"

void Radix::radix_sort(vector<int>& data) {
    // Find the maximum value in the data
    int max_value = *max_element(data.begin(), data.end());

    // Perform counting sort for each digit, starting with the least significant digit
    for (int divisor = 1; max_value / divisor > 0; divisor *= 10) {
        // Create an array to store the count of each digit
        int count[10] = { 0 };
        for (int x : data) {
            count[(x / divisor) % 10]++;
        }

        // Create an array to store the starting index for each digit
        int start[10] = { 0 };
        for (int i = 1; i < 10; i++) {
            start[i] = start[i - 1] + count[i - 1];
        }

        // Create an auxiliary array to store the sorted data
        vector<int> aux(data.size());
        for (int x : data) {
            aux[start[(x / divisor) % 10]++] = x;
        }

        // Copy the sorted data back to the original array
        data = aux;
    }
}