#include<stdio.h>
int main() {
    int ch =6,ch1 = ch;
    for ( int i = ch - 1; i > 0; i--){
    if ( ch%i == 0){
    	ch1-=i;
    if (ch1 <= 0){
    if ( i ==1){	/* number perfect */
    	break;
    	} else {
    		break; /* number imperfect */
    			}
    		}
      	  }
    }
    	
    return 0;
}
