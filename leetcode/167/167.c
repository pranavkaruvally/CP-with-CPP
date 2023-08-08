// Initially did this in C because wanted to get better with pointers :P

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int binary_search(int* arr, int arrSize, int target) {
    int start = 0;
    int end = arrSize - 1;
    int median;

    while (start <= end) {
        median = (start + end) / 2;
        if (arr[median] == target)
            return median;
        if(arr[median] < target)
            start = median+1;
        else
            end = median-1;
    }

    return -1;
}

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    *returnSize = 2;
    int *solution = calloc(2, sizeof(int));

    int count = 1;
    for (int *i=numbers; i < numbers+numbersSize-1; i++) {
        int a = binary_search(i+1, numbersSize-count, target-*i);
        if (a != -1) {
            solution[0] = count;
            solution[1] = a+count+1;
            break;
        }
        count++;
    }

    return solution;
}
