# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void substring (char *original, char *newS, int start, int end) {
    if (start < 0) start = 0;
    if (end > strlen(original)) {
        end = strlen(original);
    }
    if (end > start) {
        char temp;
        for (int i = start ; i < end ; i++) {
            temp = original[i];
            strncat(newS, &temp, 1);
        }
    }
}

int findChar (char *str, char c) {
	for (int i = 0 ; i < strlen(str) ; i++){
		if (str[i] == c) {
			return i;
		}
	}
	return -1;
}

int findLastCharOccurence (char *str, char c) {
    char *found = strrchr(str, c);
    if (found == NULL) return -1;

    int index = found - str;
    return index;
}

int countChar (char *str, char c) {
	int count = 0;

	for (int i = 0 ; i < strlen(str) ; i++){
		if (str[i] == c) {
			count ++;
		}
	}
	return count;
}

int strlenEx (char *str) {
    int i = 0;
    while (1) {
        char c = str[i];
        if ( c == 0 ) return i;
        i++;
    }
}

int getIndexOfNth (char *str, char chr, int nth) {
	int count = 0;

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == chr) {
			count ++;
			if (count >= nth) {
				return i;
			}
		}
	}

	return -1;
}
