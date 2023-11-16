#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Visualization of vector with for loop" << endl;

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n";

    cout << "Visualization of vector with iterator" << endl;

    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it){

        cout << *it << " ";
    }
    cout << "\n";
    cout << "Visualization of vector with for-each loop" << endl;

    for (const auto x: v){
        cout << x << " ";
    }
    cout << "\n";
    cout << "\n";

    cout << "This is the second section based on STL" << "\n";

    vector<int> x = {10, 20, 30, 40, 50};
    int sum_total = accumulate(begin(x), end(x), 0);

    cout << " The sum of the elements in the vector is " << sum_total << "\n";

     cout << "\n";
    cout << "\n";

    auto maxElementIt = max_element(begin(x), end(x));
    int position = distance(begin(x), end(x));

    cout << "The maximum element is " << *maxElementIt << " and its position is " << position << "\n";

    cout << "\n";
    cout << "\n";

    cout << "This a filled vector with 10" << "\n";

    fill(begin(x), end(x), 10);

    for (const auto &value: x){
        cout << value << " ";
    }

    cout << "\n";
    cout << "\n";

    cout << "This is the third question" << "\n";

    int N;
    cout << "Enter the number of integers to input: " << "\n";
    cin >> N;

    set<int> numSet;

    cout << "Enter the integers: " << "\n";

    for (int i = 0; i < N; ++i){
        int num;
        cin >> num;
        numSet.insert(num);
    }

    cout << "The number of distinct elements in the number set is: " << numSet.size() << "\n";


    return 0;
}
