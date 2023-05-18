#include <iostream>
#include <cmath>

void replaceDeviated(float arr[], int size) {
    // Ortalamayı al
    float sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    float mean = sum / size;

    // Sapma Limiti
    float deviationSum = 0.0;
    for (int i = 0; i < size; i++) {
        deviationSum += pow(arr[i] - mean, 2);
    }
    float standardDeviation = sqrt(deviationSum / size);

    // Replacing op
    for (int i = 0; i < size; i++) {
        if (fabs(arr[i] - mean) > standardDeviation) {
        
            arr[i] = mean;
        }
    }
}

int main() {
    float arr[] = {100.5,100.2,100.0,99.1,106.1,99.2,101.2,100.2,105};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    replaceDeviated(arr, size);

    std::cout << "Modified Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
