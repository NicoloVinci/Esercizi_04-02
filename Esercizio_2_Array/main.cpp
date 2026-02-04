#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector numbers = {5, 18, 21, 40, 7, 9, 60, 11, 3, 100, 8, 2};
    auto value = find_if(numbers.begin(), numbers.end(), [](int n) { return n > 50; });
    if (value == numbers.end())
    {
        cout << "No value greater than 50 found." << endl;
    }
    else
    {
        cout << "First value greater than 50 is: " << *value << endl;
    }
    auto remove = remove_if(numbers.begin(), numbers.end(), [](int n) { return (n % 2) != 0; });
    numbers.erase(remove, numbers.end());
    cout << "Even numbers: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}