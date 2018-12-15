#include <bits/stdc++.h>
using namespace std;
int checkPattern(string, string);
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	std::ifstream file("inputs/input2_2.txt");
	std::string   eachLineOfInput;
    std::vector<string> inputAsList;
    long int sizeOfInputAsList=0;
    bool foundRedundant = false;
	while(std::getline(file, eachLineOfInput))
    {
       inputAsList.push_back(eachLineOfInput);
       sizeOfInputAsList++;
    }
    for (int i = 0; i < sizeOfInputAsList && foundRedundant == false; ++i)
    {
        for (int j = 0; j < sizeOfInputAsList && foundRedundant == false; ++j)
        {
            if (i!=j)
            {
                if( checkPattern(inputAsList[i],inputAsList[j]) )
                {
                    foundRedundant = true;
                    for (int k = 0; k < inputAsList[i].size(); ++k)
                    {
                        if ( inputAsList[i][k] == inputAsList[j][k] )
                        {
                            cout<<inputAsList[i][k];
                        }
                    }
                }
            }
        }
    }
	return 0;
}

int checkPattern(string checkForRedundant1,string checkForRedundant2)
{
    int commonCharsInBothStrings = 0;
    for (int i = 0; i < checkForRedundant1.size(); ++i)
    {
        if (checkForRedundant1[i] == checkForRedundant2[i] )
        {
            commonCharsInBothStrings++;
        }
    }
    if ( checkForRedundant1.size() - commonCharsInBothStrings == 1 )
    {
        return 1;
    }
    else
        return 0;
}