#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    // Read the list of English words from a file and store them in a vector
    std::ifstream file("words_alpha.txt");
    std::vector<std::string> english_words;
    std::string word;
    while (file >> word) {
        // Convert the word to lowercase for case-insensitive matching
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
        english_words.push_back(word);
    }
    file.close();

    // Ask the user to enter the number of words
    int num_words;
    std::cout << "Enter the number of words: ";
    std::cin >> num_words;
    std::cin.ignore(); // Clear the newline character from the buffer

    std::vector<std::string> user_words;
    std::vector<int> positions;

    // Loop to get user input for each word
    for (int i = 1; i <= num_words; ++i) {
        std::cout << "Enter word #" << i << ": ";
        std::getline(std::cin, word);
        // Convert the user's input to lowercase for case-insensitive matching
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);

        if (std::find(english_words.begin(), english_words.end(), word) != english_words.end()) {
            // Find the position of the word in the list
            int position = std::find(english_words.begin(), english_words.end(), word) - english_words.begin() + 1;
            user_words.push_back(word);
            positions.push_back(position);
            std::cout << '"' << word << "\" is the " << position << "th word in the dictionary" << std::endl;
        } else {
            std::cout << '"' << word << "\" is not in the dictionary" << std::endl;
        }
    }

    return 0;
}
