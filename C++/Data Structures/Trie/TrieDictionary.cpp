#include <bits/stdc++.h>
using namespace std;
int word_count = 0;
vector<string> store;
//-----------------------------Trie-------------------------------------
struct Trie {
    bool ck;
    map<char, Trie*> map_char;
    string meaning;
};
Trie* getNew()
{
    Trie* node = new Trie;
    node->ck = false;
    return node;
}
Trie *root = NULL;
void insert(string s, string meaning)
{
    if (root == NULL)
        root = getNew();

    Trie* temp = root;
    for (int i = 0; i < s.length(); i++) {
        char x = s[i];
        if (temp->map_char.find(x) == temp->map_char.end())
            temp->map_char[x] = getNew();

        temp = temp->map_char[x];
    }
    if (temp->ck) {
        temp->meaning += '\n';
        temp->meaning += meaning;
        return ;

    }
    temp->ck = true;
    temp->meaning = meaning;
}
string getMeaning(string word)
{

    if (root == NULL)
        return "";
    Trie* temp = root;
    for (int i = 0; i < word.length(); i++) {
        temp = temp->map_char[word[i]];
        if (temp == NULL)
            return "";
    }
    if (temp->ck)
        return temp->meaning;
    return "";
}
//-----------------------Adding words from file-------------------------------------------


void add_words() {

    ifstream cin_string("words.txt");
    string s;
    while (getline(cin_string, s)) {
        if (s[0] == ' ')
            continue;
        string a = "", b = "";
        bool ck = 0, ok = 0;
        for (char c : s) {
            if (isupper(c))
                c = tolower(c);
            if (isalnum(c))
                ok = 1;
            if (c == ' ')
                ck = 1;
            if (ck)
                b += c;
            else
                a += c;
        }
        if (a.size() == 0 || !ok)
            continue;
        insert(a, b);
        store.push_back(a);
        word_count++;
        //cout << a <<" " << b << endl;
    }
}
//-----------------------------------------------------------------
signed  main() {

    add_words();

    while (1) {

        cout << "--------------Menu--------------" << endl;;
        cout << "1. Search a word" << endl;
        cout << "2. Add a word" << endl;
        cout << "3. Get a random word " << endl;
        cout << "4. Exit " << endl;
        int c;
        cout << endl << "Enter your choice: ";
        cin >> c;
        if (c == 1) {
            string s;

            cout << "Enter the word " << endl;
            cin >> s;
            for (int i = 0; i < s.size(); i++) {
                if (isupper(s[i]))
                    s[i] = tolower(s[i]);
            }
            string mean = getMeaning(s);
            if (mean.size() == 0) {
                cout << "Sorry not in the data base" << endl;
            }
            else {
                cout << s << " :" << endl;
                cout << mean << endl;
            }
        }
        else if (c == 2) {
            cout << "Enter the word" << endl;
            string s;
            cin >> s;
            cout << "Enter the meaning " << endl;
            string mean;
            for (int i = 0; i < s.size(); i++) {
                if (isupper(s[i]))
                    s[i] = tolower(s[i]);
            }
            cin.ignore();
            getline(cin, mean);
            insert(s, mean);
            cout << "Sucessfully added" << endl;
        }
        else if (c == 3) {
            int id = rand() % word_count;
            string s = store[id];
            string mean = getMeaning(s);
            if (mean.size() == 0) {
                cout << "Sorry not in the data base" << endl;
            }
            else {
                cout << s << " :" << endl;
                cout << mean << endl;
            }
        }
        else
            break;
        cout << endl;

    }
    return 0;
}
