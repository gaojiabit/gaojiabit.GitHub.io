#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<size_t> twoSum(const std::vector<int>& nums, int target)
{
    std::unordered_map<int, size_t> maps;
    for (size_t i = 0; i < nums.size(); ++i)
    {
        //如果一个maps中能找到目标值与当前值的差就返回，利用了map的查找快速
        //maps中存储的以值为key，索引为value;count()求这个key出现的次数.
        //if (maps.count(target - nums[i]))
        if(maps.find(target - nums[i]) != maps.end() )
        {
            return { maps[target - nums[i]], i };
        }
        maps[nums[i]] = i;
    }
    return { nums.size(),nums.size() };
}

int main()
{
    std::vector<int> ints{ 1,2,3,4 };
    std::vector<size_t> rets;
    rets = twoSum(ints, 1);
    std::cout << rets[0] << " , " << rets[1] << std::endl;
    rets = twoSum(ints, 6);
    std::cout << rets[0] << " , " << rets[1] << std::endl;
    rets = twoSum(ints, 7);
    std::cout << rets[0] << " , " << rets[1] << std::endl;
    rets = twoSum(ints, 8);
    std::cout << rets[0] << " , " << rets[1] << std::endl;
    return 0;
}