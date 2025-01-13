#include<iostream>
#include<vector>
#include<climits>

class Solution{
    public:
    bool increasingTriplet(std::vector<int>& nums){
        int first = INT_MAX;
        int second = INT_MAX;

        for (int num : nums){
            if(num <= first){
                first = num;
            } else if(num <= second){
                second = num;
            } else{
                return true;
            }
        }
        return false;
        
    }
};

int main(){
    Solution solution;

    std::vector<int> nums1 = {1, 2, 3, 4, 5};
    std::vector<int> nums2 = {5, 4, 3, 2, 1};
    std::vector<int> nums3 = {2, 1, 5, 0, 4};

    std::cout<<std::boolalpha;

    std::cout<<solution.increasingTriplet(nums1)<<std::endl;
    std::cout<<solution.increasingTriplet(nums2)<<std::endl;

    std::cout<<solution.increasingTriplet(nums3)<<std::endl;


}