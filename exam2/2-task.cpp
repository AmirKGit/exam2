// CountCorrectCharacters("dog", "car"); //0 (No letters are in the correct position)
// CountCorrectCharacters("dog", "god"); //1 ("o")
// CountCorrectCharacters("dog", "cog"); //2 ("o" and "g")
// CountCorrectCharacters("dog", "cod"); //1 ("o")
// CountCorrectCharacters("dog", "bog"); //2 ("o" and "g")
// CountCorrectCharacters("dog", "dog"); //3 (Correct!)
#include <iostream>

using namespace std;

void func(string str,string str1) {
    int counter=0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]==str1[i])
        {
            counter++;
        }
        
    }

    if (counter==str.length())
    {
        cout<<"Correct!";
    } else{
        cout<<counter;
    }
    
}

int main() {
    string str="dog";
    string str1="dog";

    func(str,str1);

    return 0;
}
