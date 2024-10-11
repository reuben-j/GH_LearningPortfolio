#include <iostream>

using namespace std;

int main() {
    string msg = "abd";
    int count = 0;
	for(int i = 0; i < msg.length(); i++) {
		count += int(msg[i]) - 96;
        cout << int(msg[i]);
	}
    cout << count;
}