#include <iostream>
#include <cmath>

void replaceFarValues(double arr[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double average = sum / size;

    for (int i = 0; i < size; i++) {
        if (std::abs(arr[i] - average) > 1) {  // Adjust the threshold as needed
            arr[i] = average;
        }
    }
}
int sum(double arr[],int size){
    double sum = 0;
    for(int i = 0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {
    const int size = 5;
    double values[size] = {100.5,100.2,100.0,99.1,106.1};

    std::cout <<sum(values,size)<<std::endl;
   

    replaceFarValues(values, size);

    std::cout << "Modified array: ";
    for (int i = 0; i < size; i++) {
        std::cout << values[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

