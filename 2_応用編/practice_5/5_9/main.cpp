#include <bits/stdc++.h>

using namespace std;

int main() {
    std::map<char, string> wordMap;
    std::vector<std::string> words = {"room", "wonderful", "pork", "trap", "kind", "money", "dog", "given", "yellow", "eat", "apple", "neighbor"};

    // 各単語をmapに格納
    for (const auto& word : words) {
        wordMap[word.front()] = word;
    }
    
    // 最初の単語を選択
    std::string currentWord;
    cout << "最初の言語を入力：";
    cin >> currentWord;
    auto it = find(words.begin(), words.end(), currentWord);
    
    if(it != words.end()){
        std::vector<std::string> result;
        bool found = true;

        while (found) {
            char lastChar = currentWord.back();
            
            if (wordMap.count(lastChar)){
                result.push_back(currentWord);
                currentWord = wordMap[lastChar];
            }
            else{
                found = false;
            }
        }
        for (const auto &wrd : result){
            cout << wrd << " ";
        }
    }
    else{
        cout << "ワードリストに含まれていません";
    }

    
    return 0;
}