// Test.assertEquals(validateNumber('07454876120'), 'In with a chance')
// Test.assertEquals(validateNumber('0754876120'), 'Plenty more fish in the sea 'Number too short
// Test.assertEquals(validateNumber('+447535514555'), 'In with a chance')
#include <iostream>

using namespace std;

void func(string str) {
    string valid="+447";
    string valid2="07";
    int length = str.length();
    if (str.substr(0, valid.length()) != valid && str.substr(0, valid2.length()) != valid2)
    {
        cout<<"false";
        return;
    }

    int counter=0;
    string target = "1234567890";
    for (int i = 0; i < length; i++)
    {
        for (int f = 0; f < target.length(); f++)
        {
            if (str[i]==target[f])
            {
                counter++;
            }
        }
    }
    if (counter<11)
    {
        cout<<"Plenty more fish in the sea 'Number too short";
    } else {
        cout<<"In with a chance";
    }
}

int main() {
    string str="07454876120";

    func(str);

    return 0;
}

