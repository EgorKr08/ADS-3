// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int count1 = 0, low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == value) {
            count1++;
            int iLow = mid - 1;
            while (iLow >= 0 && arr[iLow] == value) {
                count1++;
                iLow--;
            }
            int high2 = mid + 1;
            while (high2 < size && arr[high2] == value) {
                count1++;
                high2++;
            }
            return count1;
        } else if (arr[mid] < value) {
            low = mid + 1;
        } else {
            high = mid + 1;
        }
    }
    return 0;
}
