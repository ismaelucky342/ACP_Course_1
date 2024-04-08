#include <stdio.h>
#include <string.h> // strcpy()

struct student{
	char name[20];
	int age;
	float english, math, history, totalAverage;	
} students[30];

int main() {
	float lowest = 101, highest = 0;
	char highestName[20];
	char lowestName[20];
	int quantity;

	printf("\nEnter the number of students: ");
	scanf("%i", &quantity);

	int i;

	for (i = 0; i < quantity; i++) {
		fflush(stdin);
		printf("\n Student[%i] - Enter your name: ", i);
		gets(students[i].name);

		printf("\n Student[%i] - Enter your age: ", i);
		scanf("%i", &students[i].age);

		printf("\n Student[%i] - Enter English grade: ", i);
		scanf("%f", &students[i].english);

		printf("\n Student[%i] - Enter Math grade: ", i);
		scanf("%f", &students[i].math);

		printf("\n Student[%i] - Enter History grade: ", i);
		scanf("%f", &students[i].history);
	}

	for (i = 0; i < quantity; i++) {
		students[i].totalAverage = (students[i].history + students[i].english + students[i].math) / 3;

		if (students[i].totalAverage > highest) {
			highest = students[i].totalAverage;
			strcpy(highestName, students[i].name);
		}

		if (students[i].totalAverage < lowest) {
			lowest = students[i].totalAverage;
			strcpy(lowestName, students[i].name);
		}

		printf("\n Student[%i] - Name: %s - Age: %i - English/Math/History grades: %f %f %f ", i, students[i].name, students[i].age, students[i].english, students[i].math, students[i].history);
	}

	printf("\nThe name of the student with the highest average is %s and their average is %f ", highestName, highest);
	printf("\nThe name of the student with the lowest average is %s and their average is %f ", lowestName, lowest);

	return 0;
}
