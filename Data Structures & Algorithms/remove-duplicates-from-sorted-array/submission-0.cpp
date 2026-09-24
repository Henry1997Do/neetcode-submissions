#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        // If the vector is empty, there are no unique elements.
        if (nums.empty()) {
            return 0;
        }

        // 'k' is our "writer" pointer. It starts at 1 because
        // the first element is always kept.
        int k = 1;

        // 'i' is our "reader" pointer. It starts at the second element.
        for (int i = 1; i < nums.size(); i++) {
            // If the reader finds a number different from the last-written one...
            if (nums[i] != nums[k - 1]) {
                // ...copy it to the writer's position...
                nums[k] = nums[i];
                // ...and advance the writer.
                k++;
            }
        }
        // The final position of the writer 'k' is the new length.
        return k;
    }
};