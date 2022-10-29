#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
        int count = 0;
        int candidate;

        // iterate through nums
        for (int& n : nums)
        {
            if (count == 0)
            {
                candidate = n;
            }

            // if pointer is pointing to candidate add 1
            // otherwise subtract 1
            count += (n == candidate) ? 1 : -1;
        }
        return candidate;
    }
};

int main()
{
    Solution solution;
    vector<int> example_one{ 2, 2, 1, 1, 1, 2, 2 };
    cout << "Example One : " << solution.majorityElement(example_one) << endl;
    return 0;
}
