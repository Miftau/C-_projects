#include <iostream>
using namespace std;

int max_word_size(string sentence){
    int answer = 0;
    for(int i = 0; i < sentence.size(); i++){
        if(sentence[i]==' ') continue;
        int siz = 0;
        while(i<sentence.size() and sentence[i]!=' ')
            siz++, i++;

        if(siz > answer) answer=siz;
    }
    return answer;
}

int main()
{
    cout << "This is a text-wrapper program\n";

    cout << "Enter the string: ";
    string sentence; getline(cin, sentence);

    cout << "How many characters per line? ";

    int mx_word = max_word_size(sentence);
    int charLimit;

    while(cin >> charLimit){
        if(charLimit<mx_word)
            cout << "Should be at least " << mx_word << "! ";
        else break;
    }

    cout << "\nFinal output:\n";

    int counter = 0;
    for(int i = 0; i < sentence.size(); i++){
        if(sentence[i]==' ') continue;
        string word = "";
        while(i<sentence.size() and sentence[i]!=' ')
            word+=sentence[i], i++;

        if(counter+word.size() > charLimit)
            cout << "\n", counter = 0;

        cout << word << " "; counter+=word.size()+1;
    }
    cout << "\n";
}
