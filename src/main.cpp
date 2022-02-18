#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int s, a, b;
	cin >> s >> a >> b;

	auto toAdd = s - a;
	auto money = 250;
	if (0 < toAdd) {
		auto count = toAdd / b + (0 == toAdd % b ? 0 : 1);
		money += count * 100;
	}

	cout << money;

	return 0;
}