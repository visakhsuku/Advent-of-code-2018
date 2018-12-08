#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	std::ifstream file("inputs/input2_1.txt");
	std::string   eachLineOfInput;
    int countArray[26];
    long long exactly_2_OfAnyLetterCount = 0, exactly_3_OfAnyLetterCount=0;
	while(std::getline(file, eachLineOfInput))
    {
        for (int i = 0; i < 26; ++i)
        {
            countArray[i] = 0;
        }
        for (int i = 0; eachLineOfInput[i] != '\0'; ++i)
        {
            countArray[eachLineOfInput[i]-97]++;
        }
        
        for (int i = 0; i < 26; ++i)
        {
            if (countArray[i]==3)
            {
                exactly_3_OfAnyLetterCount++;
                break;
            }
        }
        for (int i = 0; i < 26; ++i)
        {
            if(countArray[i]==2)
            {
                exactly_2_OfAnyLetterCount++;
                break;
            }
        }
    	
    }
    cout<<exactly_2_OfAnyLetterCount*exactly_3_OfAnyLetterCount;

	return 0;
}