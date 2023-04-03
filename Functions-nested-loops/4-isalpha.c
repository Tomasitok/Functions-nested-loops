
/**
 * int _isalpha - Check if a character is lowercase and if it is a letter
 * @c
 * return 1 if c is lowercase and letter, 0 otherwise
*/

int _isalpha(int c){
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
        return (1);
    }
    else {
        return (0);
    }
}
