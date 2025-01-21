#include <stdio.h>

/*guess will return 0 if your guess is correct
1 if your guess is larger that the correct number
and -1 if your guess is smaller than the correct number*/
int guess(int nr){
    if (nr == 75){
        return 0;
    }
    if (nr < 75){
        return -1;
    }
    if (nr > 75){
        return 1;
    }


}