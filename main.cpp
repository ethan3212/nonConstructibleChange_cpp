#include <iostream>
#include <vector>
using namespace std;

// O(nLog(n)) time | O(1) space
int nonConstructibleChange(vector<int> coins) {
    sort(coins.begin(), coins.end());// O(nLog(n)) time
    int amountOfChangeWeCanMake = 0;
    for(int coin : coins) {// O(n) time
        if(coin > amountOfChangeWeCanMake + 1) {
            return amountOfChangeWeCanMake + 1;
        }
        amountOfChangeWeCanMake += coin;
    }
    return amountOfChangeWeCanMake + 1;
}

int main() {
    vector<int> coins = {5, 7, 1, 1, 2, 3, 22};
    cout << nonConstructibleChange(coins);
    return 0;
}
