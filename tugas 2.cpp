#include <stdio.h>

int main() {
	float celcius, fahrenheit, reamur;
	
	printf("Masukan suhu dalam Celcius: ");
	scanf("%f", &celcius);
	
	fahrenheit = (celcius * 9 / 5) + 32;
	reamur = celcius * 4 / 5;
	
	printf("Suhu dalam fahrenheit: %.2f\n", fahrenheit);
	printf("Suhu dalam reamur: %.2f\n", reamur);
	
	return 0;
}
