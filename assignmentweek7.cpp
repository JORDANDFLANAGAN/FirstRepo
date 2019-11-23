#include <stdio.h>
#include <string.h>

double calculateArea(double height, double width);
double calculatePainter(double area, int numCoats, double m2PerLitre);


double height, width, m2PerLitre;
int numCoats;
double totalArea = 0;
char x;
double doors;
char windows;
double calculatePaint = 0;



int main() {
	do {
		printf("Enter Wall Height (h): ");
		scanf_s("%lf", &height);
		printf("\nEnter Wall Width (w): ");
		scanf_s("%lf", &width);
		totalArea = totalArea + calculateArea(width, height);
		printf("More Walls (y/n): ");
		scanf_s(" %c", &x);

	} while (x == 'y');
	printf("Total Wall Area: %lf", totalArea);

	printf("\nhow many doors are in the room (Count a double door as 2): ");
	scanf_s("%lf", &doors);

	totalArea = totalArea - (doors * 3);
	printf("Total wall area minus doors: %lf", totalArea);

	printf("\nAre there windows in the room? (y/n): ");
	scanf_s(" %c", &windows);
	if (windows == 'y') {
		printf("Enter window height: ");
		scanf_s("%lf", &height);
		printf("Enter window Width: ");
		scanf_s("%lf", &width);
		totalArea = totalArea - calculateArea(height, width);
		printf(" %lf", totalArea);
	}
	printf("\nAre there more windows? (y/n): ");
	scanf_s(" %c", &x);

	while (x == 'y') {
		printf("Enter window height: ");
		scanf_s("%lf", &height);
		printf("Enter window Width: ");
		scanf_s("%lf", &width);
		totalArea = totalArea - (height * width);
		printf("%lf", calculateArea);

		printf("\nAre there more windows? (y/n): ");
		scanf_s(" %c", &x);
	}
	
	printf("The Total Wall area minus the windows and doors: %lf", totalArea);

	printf("\nWhat is the coverage per m2 of your paint: ");
	scanf_s(" %lf", &m2PerLitre);

	printf("\nhow many coats do you want: ");
	scanf_s(" %d", &numCoats);

	calculatePaint = calculatePainter(totalArea, numCoats, m2PerLitre);

	printf("\nYou will need %lf to the nearest litre of paint.", calculatePaint);
}



double calculateArea(double height, double width) {

	double area = 0;
	area = height * width;
	return area;
}
double calculatePainter(double area, int numCoats, double m2PerLitre) {
	double totalPaint = 0;
	totalPaint = (totalArea * numCoats) / (m2PerLitre);
	return totalPaint;
}