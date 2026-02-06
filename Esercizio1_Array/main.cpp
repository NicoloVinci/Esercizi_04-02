#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector numbers = {15, -3, 22, -8, 7, 0, 14, -1, 9, 30};
    auto firstNegative = std::find_if(numbers.begin(), numbers.end(), [](int n) { return n < 0; });
    cout << "First negative number: ";
    if (firstNegative != numbers.end())
    {
        cout << *firstNegative << endl;
    }
    else
    {
        cout << "None found" << endl;
    }
    auto remove = std::remove_if(numbers.begin(), numbers.end(), [](int n) { return n < 0; });
    numbers.erase(remove, numbers.end());
    cout << "Final Array: ";
    for (int number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;

    return 0;
}