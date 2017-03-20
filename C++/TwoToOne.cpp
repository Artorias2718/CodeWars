#include <string>
class TwoToOne
{
public:
    static std::string longest(const std::string &s1, const std::string &s2);
};

std::string TwoToOne::longest(const std::string& s1, const std::string& s2)
{
		std::string charList = "";
    for(size_t i = 0; i < s1.length(); ++i)
    {
    		if(charList.find(s1.at(i)) == std::string::npos)
        {
        		charList.push_back(s1.at(i));
        }
    }
    
    for(size_t i = 0; i < s2.length(); ++i)
    {
    		if(charList.find(s2.at(i)) == std::string::npos)
        {
        		charList.push_back(s2.at(i));
        }
    }
    
    std::sort(charList.begin(), charList.end());
    return charList;
}