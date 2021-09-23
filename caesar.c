#include "caesar.h"


char caesar(char s, int n){
	char moved = s+n%26;
	if ((moved>96&&moved<123)||(moved>64&&moved<91)){
		return moved;
	}
	else{
		return s;
	}
	
}