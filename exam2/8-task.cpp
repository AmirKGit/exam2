#include <iostream>
#include <vector>

using namespace std;

vector<int> orArrays(vector<int> a, vector<int> b, int defaultValue = 0) {
    int length = max(a.size(), b.size());
    vector<int> result(length);

    for (int i = 0; i < length; i++) {
        int valA = defaultValue;
        int valB = defaultValue;

        if (i < a.size()) {
            valA = a[i];
        }
        if (i < b.size()) {
            valB = b[i];
        }

        result[i] = valA | valB;
    }

    return result;
}

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {4, 5, 6};

    vector<int> result = orArrays(a, b);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
