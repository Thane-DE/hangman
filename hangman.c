#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void new_Word() {
	printf("Please enter your new word: ");
	char secret_word[128];
	fgets(secret_word, 128, stdin);

	printf("\nConfirm: The new word is: %s?\n", secret_word);
	printf("Yes: Y, No: N - Confirm: ");
	//I somehow had to print some space o_O
	printf(
			"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
void test_value(char test_char) {

}
void reset() {

}
void do_round() {

}

int main(void) {
	printf("Welcome to hangman!\n");
	printf("----------------------\n");
	printf("How many players/teams are there (maximum of 4): ");

	//Gets a the player number
	char player_number_buf[2];
	char player_number;
	fgets(player_number_buf, 2, stdin);
	player_number = atoi(player_number_buf);

	if (player_number < 1 || player_number > 4) {
		//If the user entered a non-valid number
		printf("\nERROR: %i is not a valid player size\n", player_number);
		return -1;
		exit(1);
	}
	printf("\nConfirmed: There are %i players.\n", player_number);
	new_Word();

	return 0;
}
