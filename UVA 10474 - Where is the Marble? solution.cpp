//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();

bool palind(string s) {
	for (unsigned int i = 0, f = s.size() - 1; i < s.size() / 2; i++, f--)
		if (s[i] != s[f])
			return false;
	return true;
}

//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
// 10474 - Where is the Marble?
	int n, q, x, i = 1;
	vector<int> v;
	vector<int>::iterator it;
	while (cin >> n >> q) {
		if (!n && !q)
			break;
		v.clear();
		while (n--) {
			cin >> x;
			v.push_back(x);
		}
		sort(all(v));
		cout << "CASE# " << i++ << ":\n";
		while (q--) {
			cin >> x;
			cout << x << " ";
			it = lower_bound(all(v), x);
			if (it == v.end() || (*it) != x)
				cout << "not found\n";
			else
				cout << "found at " << (it - v.begin()) + 1 << endl;
		}
	}
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
