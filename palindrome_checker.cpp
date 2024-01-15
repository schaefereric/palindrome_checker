// palindrome_checker.cpp 

#include <iostream>
#include <string>


int main()
{   
    std::string input;
    std::cout << "Enter word: ";
    std::cin >> input;

    std::string reversal;

    // reverse string
    for (int i = input.size() - 1; i >= 0; i--) {
        reversal.push_back(input[i]);
    }

    // print input and reversal
    std::cout << std::endl << input << " - " << reversal << std::endl;

    // determine difference
    int similarity_count = 0;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == reversal[i]) {
            similarity_count++;
        }
    }

    // show results
    if (similarity_count == input.size()) {
        std::cout << "It's a palindrome!";
    }
    else if (similarity_count < input.size() && similarity_count > input.size() - 2) {
        std::cout << "Almost a palindrome!";
    }
    else {
        std::cout << "Not a palindrome!";
    }

    std::cout << std::endl;
    std::cout << "Similarity Count: " << similarity_count << std::endl;

    return 0;
}

