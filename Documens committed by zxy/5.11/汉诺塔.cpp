#include <iostream>
#include <format>
using namespace std;
//ººÅµËþ
int steps = 1;
void hanoiMove(int i, char src, char tmp, char dst) {
	if (i == 1) {
		cout << format("Step{}£ºMove Disk{} from {} to {}", steps++, i, src, dst) << endl;
		return;
	}
	hanoiMove(i - 1, src, dst, tmp);
	cout << format("Step{}£ºMove Disk{} from {} to {}", steps++, i, src, dst) << endl;
	hanoiMove(i - 1, tmp, src, dst);
}
int main() {
	int n;
	cin >> n;
	hanoiMove(n, 'A', 'B', 'C');

	return 0;
}