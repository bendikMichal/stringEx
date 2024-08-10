
void substring (char *original, char *newS, int start, int end);

int findChar (char *str, char c);

int findLastCharOccurence (char *str, char c);

int countChar (char *str, char c);

int strlenEx (char *str);

/* Gets, index of nth occurence of char, is NOT 0 based, first = 1
 * */ 
int getIndexOfNth (char *str, char chr, int nth);

/* Finds starting index of a string in another string, otherwise returns -1 
 * */
int findStringIndex (char *str, char *str_to_find);
