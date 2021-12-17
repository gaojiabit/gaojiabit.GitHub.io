```
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
std::vector<size_t> twoSum(const vector<int>& nums, int target)
{
    std::unordered_map<int, size_t> maps;
    for (size_t i = 0; i < nums.size(); ++i)
    {
        if (maps.count(target - nums[i]))
        {
            return { maps[target - nums[i]], i };
        }
        maps[nums[i]] = i;
    }
    return { nums.size(),nums.size() };
}

int main()
{
    vector<int> ints{ 1,2,3,4 };
    vector<size_t> rets;
    rets = twoSum(ints, 5);
    cout << rets[0] << " , " << rets[1] << endl;
    return 0;
}