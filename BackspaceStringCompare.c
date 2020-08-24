//
// Created by CHANGCHUNGHUAN on 2020/8/24.
//
/* Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.
   Note that after backspacing an empty text, the text will continue empty. */

bool backspaceCompare(char * S, char * T){
    return strcmp(process(S), process(T)) == 0;
}

char* process(char* str) {
    int lenOfStr = strlen(str);
    int j = 0;
    for (int i = 0; i < lenOfStr; i++) {
        if (str[i] != '#') {
            str[j] = str[i];
            j++;
        }
        else {
            if (j > 0) {
                j--;
            }
        }
    }
    str[j] = '\0';
    return str;
}