#include <iostream>
#include <map>
using namespace std;

int sum(const map<int, int>& m, map<int, int>::const_iterator it) {
    if (it == m.end()) {
        return 0;
    }
    return it->second + sumMapValues(m, next(it));
}

int main() {
    map<int, int> myMap = {{1, 10}, {2, 20}, {3, 30}};
    cout << sum(myMap, myMap.begin()) << endl;
    return 0;
}
