#include "caesar.h"

char caesar(char s, int n){
	char moved = s+n%26;
	if ((s>96&&s<123)||(s>64&&s<91)){
		if ((s>64&&moved<=64)||(s>96&&moved<=96)){
			moved = moved + 25;
		}
		else if((s<123&&moved>=123)||(s<96&&moved>=91)){
			moved = moved - 25;
		}

		return moved;
	}
	else{
		return s;
	}
	
}