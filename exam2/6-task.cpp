// [1, 2, 3, 4, 5, 6], 2 --> [2, 4, 6]
#include <iostream>

using namespace std;

void func(int arr[], int length,int target) {
    for (int i = 0; i < length; i++)
    {
        if (arr[i]%target==0)
        {
            cout<<arr[i];
        }
        
    }
    
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int target=2;
    int length = sizeof(arr) / sizeof(arr[0]);

    func(arr, length,target);

    return 0;
}
