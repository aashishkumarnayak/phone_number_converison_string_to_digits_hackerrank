#include <bits/stdc++.h>
using namespace std;

string getPhoneNumber(string s)
{
    map<string, string> mp = {
    {"zero", "0"},
    {"one", "1"},
    {"two", "2"},
    {"three", "3"},
    {"four", "4"},
    {"five", "5"},
    {"six", "6"},
    {"seven", "7"},
    {"eight", "8"},
    {"nine", "9"}
    };
    
    string word = "";
    string ans = "";
    
    int i = 0;
    int repeatCount = 1;
    while(i < s.size() )
    {

               word = word + s[i];
            if(mp.find(word) != mp.end())
            {
                while(repeatCount > 0)
                {
                    ans = ans + mp[word];
                    repeatCount--;
                }
                repeatCount = 1;
                 word = "";
                 i++;
            }
            else{
                if(word == "double")
                {
                    word = "";
                    repeatCount = 2;
                    i++;
                }
                if(word == "triple")
                {
                   word = "";
                   repeatCount = 3; 
                   i++;
                }
                
            }
           
        

        i++;
    }
    return ans;
    
}


int main() {
	// your code goes here
	string s;
	getline(cin, s);
	cout<<getPhoneNumber(s);
	return 0;
}
