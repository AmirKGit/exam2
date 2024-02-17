// 6, "I"     -> "IIIIII"
// 5, "Hello" -> "HelloHelloHelloHelloHello"
#include <iostream>

using namespace std;

void func(string str,int num) {
    for (int i = 0; i < num; i++)
    {
        cout<<str;
    }
    
}

int main() {
    string str;
    int num;
    cout<<"SOZ KIRITING ";
    cin>>str;
    cout<<"SON KIRIT ";
    cin>>num;


    func(str,num);

    return 0;
}
