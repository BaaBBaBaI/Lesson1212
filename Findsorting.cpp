#include <iostream>
#include <ctime>
#include <chrono>
void selectionSort(int* ar, int size) {
    int tmpMax;
    int nb;


    int tmp;
    int bufer;

    for (int i = 0; i < size; i++) {
        tmpMax = ar[i];
        nb = i;
        tmp = i;
        for (int j = i + 1; j < size; j++) {



            if (tmpMax > ar[j]) {
                tmpMax = ar[j];

                tmp = j;
            }
        }

        bufer = ar[nb];
        ar[nb] = ar[tmp];
        ar[tmp] = bufer;
    }
}
void bubbleSort(int* ar, int size) {
    int num;


    for (int s = size; s > 0; s--) {
        for (int i = 0; i < size - 1; i++) {
            if (ar[i] < ar[i + 1]) {
                num = ar[i];
                ar[i] = ar[i + 1];
                ar[i + 1] = num;
            }
        }
    }
}
void insertionSort(int* ar, int size) {
    int element;
    int indexArr;
    int j;
    int key = 0;
    for (int i = 1; i < size; i++) {




        key = 0;
        for (j = i - 1; j >= 0; j--) {

            if (ar[j] > ar[i]) {
                key = 1;
                element = ar[i];
                indexArr = j + 1;
                break;

            }
        }
        if (key == 0) {
            element = ar[i];
            indexArr = j + 1;
        }
        for (j = i - 1; j >= indexArr; j--) {

            ar[j + 1] = ar[j];
        }
        ar[indexArr] = element;
    }
}
void selectionSortCheck() {
    srand(time(0));
    int s = 0;
    bool timelimit = false;

    int c[7][3] = { {100, 500, 100},{500, 1000, 250},{1000, 10000, 1000},{10000, 100000, 5000},{100000, 200000, 10000},{200000, 1000000, 100000},{1000000, 10000001, 1000000} };
    for (int z = 0; z < 7; z++) {
        if (timelimit == true) {
            std::cout << "Initiating cycle break." << std::endl;
            break;
        }
        for (int i = c[z][0]; i < c[z][1]; i += c[z][2]) {
            s = i;
            int* ar = new int[s];
            std::cout << s << "\t";
            for (int j = 0; j < s; j++) {
                ar[j] = 1 + rand() % 1000;
            }
            clock_t t0 = clock();
            std::chrono::time_point<std::chrono::high_resolution_clock> start;
            start = std::chrono::high_resolution_clock::now();

            selectionSort(ar, s);

            std::chrono::time_point<std::chrono::high_resolution_clock> end;
            end = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff = end - start;
            std::cout << diff.count() << std::endl;
            clock_t t1 = clock();
            if ((double)(t1 - t0) / CLOCKS_PER_SEC >= 10) {
                std::cout << "Time limit reached. Waiting to initiate cycle break" << std::endl;
                timelimit = true;
                break;
            }

        }
    }


}
void bubblesSortCheck() {
    srand(time(0));
    int s = 0;
    bool timelimit = false;

    int c[7][3] = { {100, 500, 100},{500, 1000, 250},{1000, 10000, 1000},{10000, 100000, 5000},{100000, 200000, 10000},{200000, 1000000, 100000},{1000000, 10000001, 1000000} };
    for (int z = 0; z < 7; z++) {
        if (timelimit == true) {
            std::cout << "Initiating cycle break." << std::endl;
            break;
        }
        for (int i = c[z][0]; i < c[z][1]; i += c[z][2]) {
            s = i;
            int* ar = new int[s];
            std::cout << s << "\t";
            for (int j = 0; j < s; j++) {
                ar[j] = 1 + rand() % 1000;
            }
            clock_t t0 = clock();
            std::chrono::time_point<std::chrono::high_resolution_clock> start;
            start = std::chrono::high_resolution_clock::now();

            bubbleSort(ar, s);

            std::chrono::time_point<std::chrono::high_resolution_clock> end;
            end = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff = end - start;
            std::cout << diff.count() << std::endl;
            clock_t t1 = clock();
            if ((double)(t1 - t0) / CLOCKS_PER_SEC >= 10) {
                std::cout << "Time limit reached. Waiting to initiate cycle break" << std::endl;
                timelimit = true;
                break;
            }

        }
    }
}
void insertionSortCheck() {
    srand(time(0));
    int s = 0;
    bool timelimit = false;

    int c[7][3] = { {100, 500, 100},{500, 1000, 250},{1000, 10000, 1000},{10000, 100000, 5000},{100000, 200000, 10000},{200000, 1000000, 100000},{1000000, 10000001, 1000000} };
    for (int z = 0; z < 7; z++) {
        if (timelimit == true) {
            std::cout << "Initiating cycle break." << std::endl;
            break;
        }
        for (int i = c[z][0]; i < c[z][1]; i += c[z][2]) {
            s = i;
            int* ar = new int[s];
            std::cout << s << "\t";
            for (int j = 0; j < s; j++) {
                ar[j] = 1 + rand() % 1000;
            }
            clock_t t0 = clock();
            std::chrono::time_point<std::chrono::high_resolution_clock> start;
            start = std::chrono::high_resolution_clock::now();

            insertionSort(ar, s);

            std::chrono::time_point<std::chrono::high_resolution_clock> end;
            end = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff = end - start;
            std::cout << diff.count() << std::endl;
            clock_t t1 = clock();
            if ((double)(t1 - t0) / CLOCKS_PER_SEC >= 10) {
                std::cout << "Time limit reached. Waiting to initiate cycle break" << std::endl;
                timelimit = true;
                break;
            }

        }
    }
}
int main() {
    std::cout << "time checking: selection sort algorithm" << std::endl;
    selectionSortCheck();
    std::cout << "time checking: bubble sort algorithm" << std::endl;
    bubblesSortCheck();
    std::cout << "time checking: bubble sort algorithm" << std::endl;
    insertionSortCheck();

}

