#include <vector>
#include <iostream>
using namespace std;

int score(const vector<int>& dice) {
    struct map {
        int count;
        int num;
        int score;
    };
    vector<int> counts(7, 0);
    vector<map> maps{{3, 1, 1000}, {3, 6, 600}, {3, 5, 500}, {3, 4, 400}, 
                        {3, 3, 300}, {3, 2, 200}, {1, 1, 100}, {1, 5, 50}};
    int score = 0;
    for (const int d : dice) {
        ++counts[d];
    }
    int i = 0;
    while (i < maps.size()) {
        if (counts[maps[i].num] >= maps[i].count) {
            counts[maps[i].num] -= maps[i].count;
            score += maps[i].score;
        } else {
            ++i;
        }
    }
    return score;
}
int	main(int argc, char **argv) {
    vector<int> dice{2, 4, 4, 5, 4};
    cout << score(dice) << endl;
    return 0;
}
