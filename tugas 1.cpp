#include <stdio.h>
#include <math.h>

int main(){
	float alas, tinggi, luas, keliling, sisi_miring;
	
	printf("Masukan panjang alas segitiga (cm): ");
	scanf("a%f", &alas);
	printf("Masuikan tinggi segitiga (cm): ");
	scanf("%f", &tinggi);
	
	luas = (alas * tinggi) / 2;
	
	sisi_miring = sqrt(alas * alas + tinggi * tinggi);
	
	keliling = alas + tinggi + sisi_miring;
	
	printf("Luas segitiga: %.2f cm^2\n", luas);
	printf("Keliling segitiga: %.2f cm\n", keliling );
	
	return 0;
	
}
