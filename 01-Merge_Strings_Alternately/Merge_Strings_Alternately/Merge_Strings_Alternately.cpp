#include <iostream>
#include<string>

using namespace std;

//Solution #1
class Solution
{

public:

    string mergeAlternately(string word1, string word2) {

        string Merge = "";

       // 1. Memory Optimization: Reserve memory upfront to avoid dynamic re-allocations
       Merge.reserve(word1.size() + word2.size());


       //int i = 0;
       // 2. Use size_t for sizes and lengths (unsigned) to prevent signed/unsigned comparison warnings
        size_t i = 0;

        while (i < word1.size() || i < word2.size())
        {
            if (i < word1.size())
            {
                Merge += word1[i];
            }

            if (i < word2.size())
            {
                Merge += word2[i];
            }

            i++;
        }

        return Merge;

    }

};

//Solution #2

//class Solution
//{
//
//public:
//
//    string mergeAlternately(string word1, string word2) {
//
//        string Merge = "";
//        //int Limit = (word1.size() < word2.size()) ? word1.size() : word2.size();
//        int Limit = min(word1.size(), word2.size());
//
//        for (int i = 0; i < Limit; i++)
//        {
//            Merge += word1[i];
//            Merge += word2[i];
//        }
//
//        for (int i = Limit; i < word1.size(); i++)
//        {
//            Merge += word1[i];
//        }
//
//        for (int i = Limit; i < word2.size(); i++)
//        {
//            Merge += word2[i];
//        }
//
//        return Merge;
//
//    }
//
//};


int main()
{
    Solution Sol;

    string word1 = "abc";
    string word2 = "pqr";

    string Result = Sol.mergeAlternately(word1, word2);

    cout << "Case #1: " << "Merged Result: " << Result << "\n";

    string word3 = "ab";
    string word4 = "pqrs";

    Result = Sol.mergeAlternately(word3, word4);

    cout << "Case #2: " << "Merged Result: " << Result << "\n";

    string word5 = "abcd";
    string word6 = "pq";

    Result = Sol.mergeAlternately(word5, word6);

    cout << "Case #3: " << "Merged Result: " << Result << "\n";

    system("pause>0");
    return 0;
}

