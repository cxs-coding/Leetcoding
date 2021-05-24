#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int i, j;
	  int ret[2] = {0};
	  *returnSize = 2;
    for (i = 0; i < numsSize; i++) {
        int key = target - nums[i];
        for (j = i + 1; j < numsSize; j++)
            if (nums[j] == key) {
                ret[0] = i;
                ret[1] = j;
				return ret;
            }
    }
    return ret;
}

int main ()
{
	int ay[] = {1, 2, 4, 3, 6, 4, 5};
	int target = 7;
	int resetsize;
	int* ret = NULL;

	ret = twoSum(ay, sizeof(ay)/sizeof(ay[0]), target,  &resetsize);
	printf("%d, %d\n", ret[0], ret[1]);

	system("pause");
	return 0;
}
