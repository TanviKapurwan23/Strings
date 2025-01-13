#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::string reverseWords(std::string s) {
        std::istringstream iss(s);

        // Uses std::istringstream to extract words from the input string. This stream handles any leading, trailing, or multiple spaces between words.
        std::vector<std::string> words;
        std::string word;

        // Extract words from the string
        while (iss >> word) {
            words.push_back(word);
        }

        //Reverse the order of words
        std::reverse(words.begin(), words.end());

        // Join words back into a single string
        std::string reversed;
        for (size_t i = 0; i < words.size(); ++i) {
            reversed += words[i];
            if (i != words.size()-1) {
                reversed += " ";
            }
        }

        return reversed;
    }
};

int main() {
    Solution solution;
    
    std::string test1 = "the sky is blue";
    std::string test2 = "  hello world  ";
    std::string test3 = "a good   example";

    std::cout << "Original: \"" << test1 << "\" -> Reversed: \"" << solution.reverseWords(test1) << "\"" << std::endl;
    std::cout << "Original: \"" << test2 << "\" -> Reversed: \"" << solution.reverseWords(test2) << "\"" << std::endl;
    std::cout << "Original: \"" << test3 << "\" -> Reversed: \"" << solution.reverseWords(test3) << "\"" << std::endl;

    return 0;
}
