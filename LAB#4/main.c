#include <stdio.h>
void replace_all (char* str, char oldChar, char newChar) { }
int main {
    char str [100], oldChar = 'a', newchar = 'A';
    printf("Enter any string: ");
    scanf("%s", str);
    
    printf("\nString before replacing: \n%s", str);
    replace_all(str, oldChar, newchar);
    printf("\n\nString after replacing %c with %c : \n%s", oldChar, newchar, str);
    
    return 0;
}
