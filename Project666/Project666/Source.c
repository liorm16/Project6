#define _CRT_SECURE_NO_WARNINGS



int main(int argc, char* argv[]) {
	int choice = malloc(sizeof( int));
	printf("Please choose a question by entering 1-3:\n");
	scanf_s("%d", &choice);
	while (choice != 0) {
		if (choice==1) {

		}
		if (choice == 2) {

		}
		if (choice == 3) {

		}

		printf("Please choose a question by entering 1-3:\n");
		scanf_s("%d", &choice);
	}
}