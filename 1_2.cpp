#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	std::ifstream file("inputs/input1_2.txt");
	std::string   lineInputInCharacters;
	char typeOfFrequencyChange;
	long long frequncySum = 0, lineInputInInteger = 0;
    std::vector<long long> frequncyChangeList;
    frequncyChangeList.push_back(frequncySum);
    while(1)
    {
	   while(std::getline(file, lineInputInCharacters))
        {
    	   lineInputInInteger = 0;
    	   for (int i = 1; lineInputInCharacters[i] != '\0'; ++i)
    	   {
    		  lineInputInInteger = (lineInputInInteger * 10) + (lineInputInCharacters[i] - 48 );
    	   }
    	   //cout<<lineInputInInteger<<"\n";
    	   typeOfFrequencyChange = lineInputInCharacters[0];
    	   //cout<<typeOfFrequencyChange<<"\n";
    	   if(typeOfFrequencyChange == '+')
    	   {
    		  frequncySum = frequncySum + lineInputInInteger;
    	   }
    	
    	   else if(typeOfFrequencyChange == '-')
    	   {
    		  frequncySum = frequncySum - lineInputInInteger;
            }
            for (int i = 0; i < frequncyChangeList.size(); ++i)
            {
                if(frequncyChangeList[i] == frequncySum)
                {
                    cout<<frequncySum;
                    return 0;
                }
            }
            frequncyChangeList.push_back(frequncySum);
        }
        file.clear();
        file.seekg(0, ios::beg);
    }
    //cout<<frequncySum;

	return 0;
}