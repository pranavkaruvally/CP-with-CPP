/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int* solution = (int*)malloc(sizeof(int)*2);
    int i=0, j=numbersSize - 1;

    while (i < j) {
        int sum = numbers[i]+numbers[j];
        if (sum == target) {
            solution[0] = i+1;
            solution[1] = j+1;
            break;
        }
        if (sum < target)
            i++;
        else
            j--;
    }

    *returnSize = 2;
    return solution;
}
