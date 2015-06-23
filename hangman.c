#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void new_Word(){
	printf("Please enter your new word: ");
	char player_number_char[2];
	fgets(player_number_char,2,stdin);
	int player_number = atoi(player_number_char[1]);

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
void test_value(char test_char){

}
void reset(){

}
void do_round(){

}

int main(void){
	printf("Welcome to hangman!\n");
	printf("----------------------\n");
	printf("How many players/teams are there (maximum of 4)?");

	char player_number_char[2];
	fgets(player_number_char,2,stdin);
	int player_number = atoi(player_number_char[1]);
	if()

	printf("Confirmed: There are %i players.\n",player_number);

	new_Word();
	return 0;
}
