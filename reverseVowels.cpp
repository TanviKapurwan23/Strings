#include <iostream>
#include <string>
#include <unordered_set>

class Solution {
public:
    std::string reverseVowels(std::string s) {
        std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            // Move left pointer until we find a vowel
            while (left < right && vowels.find(s[left]) == vowels.end()) {
                left++;
            }
            //Move right pointer until we find a vowel
            while (left < right && vowels.find(s[right]) == vowels.end()) {
                right--;
            }
            // Swap the vowels
            if (left < right) {
                std::swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};

int main() {
    Solution solution;
    
    std::string test1 = "hello";
    std::string test2 = "leetcode";
    std::string test3 = "aA";

    std::cout << "Original: \"" << test1 << "\" -> Reversed Vowels: \"" << solution.reverseVowels(test1) << "\"" << std::endl;
    std::cout << "Original: \"" << test2 << "\" -> Reversed Vowels: \"" << solution.reverseVowels(test2) << "\"" << std::endl;
    std::cout << "Original: \"" << test3 << "\" -> Reversed Vowels: \"" << solution.reverseVowels(test3) << "\"" << std::endl;

    return 0;
}
