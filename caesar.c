#include "caesar.h"

char caesar(char s, int n){

	char moved;


	if (( s >= 'a' && s <= 'z')){
		moved = s+n%26;
		if(moved > 'z'){
			moved = moved - 25;
		}
		else if (moved<'a'){
			moved = moved + 25;
		}
		return moved;
	}
	else if (( s >= 'A' && s <= 'Z')){
		moved = s+n%26;
		if(moved > 'Z'){
			moved = moved - 25;
		}
		else if (moved<'A'){
			moved = moved + 25;
		}
		return moved;
	}
	else{
		return s;
	}
	
}