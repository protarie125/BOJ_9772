#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

double x, y;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  while (true) {
    cin >> x >> y;
    if (0 == x && 0 == y) {
      cout << "AXIS\n";
      break;
    }

    if (0 == x || 0 == y) {
      cout << "AXIS\n";
      continue;
    }

    if (0 < x) {
      if (0 < y) {
        cout << "Q1\n";
      } else {
        cout << "Q4\n";
      }
    } else {
      if (0 < y) {
        cout << "Q2\n";
      } else {
        cout << "Q3\n";
      }
    }
  }

  return 0;
}