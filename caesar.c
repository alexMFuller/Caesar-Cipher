#include "caesar.h"

char caesar(char s, int n){

	unsigned char moved;
	//BUG: ONCE CHARS ROLL PAST 'f' in the positive direction, they become unreadable
	
	if (( s >= 'a' && s <= 'z' )){
		moved = s+n%26;
		

		if(moved > 'z'){
			moved = moved - 26;
		}
		else if (moved<'a'){
			moved = moved + 26;
		}
		return moved;
	}
	else if (( s >= 'A' && s <= 'Z')){
		moved = s+n%26;
		if(moved > 'Z'){
			moved = moved - 26;
		}
		else if (moved<'A'){
			moved = moved + 26;
		}
		return moved;
	}
	else{
		return s;
	}
	
}