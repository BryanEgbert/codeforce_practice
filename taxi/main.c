#include <stdio.h>

int main() {
	int size;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int output = 0;

	scanf("%d", &size);

	int si[size];

	for(int i = 0; i < size; ++i) {
		scanf("%d", &si[i]);
	}

	for(int i = 0; i < size; ++i) {
		switch (si[i])
		{
			case 1:
				a++;
				break;
			case 2:
				b++;
				break;
			case 3:
				c++;
				break;
			case 4:
				d++;
				break;
			default:
				break;
		}
	}

	output += d;

	while(a != 0 || b != 0 || c != 0) {

		// If no.3 and no.1 exist
		if(a != 0 && c != 0) {
			output++;
			a--;
			c--;
			continue;
		}

		// If two of no.2 exist
		if(b != 0) {
			if(b > 1) {
				output++;
				b -= 2;
				continue;
			}
			else if(b == 1 && c == 0 && a == 0) {
				output++;
				b = 0;
				continue;
			}

		}

		// If there is no no.3
		if(b != 0 && a != 0) {
			b--;
			a--;
			c++;
			continue;
		}

		// If there is no no.1 in the array
		if(b != 0 && c != 0 && a == 0) {
			output += 2;
			b--;
			c--;
			continue;
		}

		// If only no.1 in an array
		if(a != 0 && b == 0 && c == 0) {
			if(a >= 4) {
				output++;
				a -= 4;
				continue;
			}
			else {
				output++;
				a = 0;
				continue;
			}
		}

		if(c != 0 && b == 0 && a == 0) {
			output += c;
			c = 0;
		}
	}

	printf("%d", output);
}