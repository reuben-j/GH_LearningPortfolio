#include <iostream>
using namespace std;

int binarySearch(int array[], int length, int item) {
    int low = 0;
    int high = length - 1;

    while (low <= high) {
        int mid = (low + high) / 2;  // Fix for midpoint calculation
        int guess = array[mid];      // Declare and assign `guess`

        if (guess == item) {
            return mid;
        }
        else if (guess > item) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;  // Return -1 if item not found
}

int main() {
    int myArray[] = {11, 20, 34, 35, 38, 41, 44, 46, 56, 58, 79, 102, 118, 123, 142, 148, 159, 169, 183, 194, 195,
                     212, 218, 224, 231, 234, 237, 247, 248, 265, 289, 320, 324, 325, 334, 343, 348, 350, 356, 357,
                     360, 362, 363, 365, 381, 384, 400, 405, 419, 424, 428, 488, 489, 527, 551, 552, 553, 565, 586,
                     588, 600, 608, 610, 622, 628, 647, 656, 664, 681, 687, 702, 703, 704, 711, 714, 719, 727, 771,
                     789, 792, 806, 811, 813, 817, 820, 834, 841, 861, 903, 910, 930, 934, 938, 940, 947, 951, 968,
                     977, 979, 981};

    int length = sizeof(myArray) / sizeof(myArray[0]);
    int result = binarySearch(myArray, length, 11);

    if (result != -1) {
        cout << "Item found at index: " << result << endl;
    } else {
        cout << "Item not found." << endl;
    }

    return 0;
}
