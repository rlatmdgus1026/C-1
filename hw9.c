#include <stdio.h>

int convCase(int ch)
{
    const int diff = 'a' - 'A';
    if (ch >= 'A' && ch <= 'Z')
        return ch + diff; 
    else if (ch >= 'a' && ch <= 'z')
        return ch - diff; 
    else
        return ch; 
}

int main(void) {
    char input[1000];  
    char output[1000]; 
    int i = 0;

    printf("���ڿ� �Է�: ");
    fgets(input, sizeof(input), stdin); 

    
    while (input[i] != '\0' && input[i] != '\n') {
        output[i] = convCase(input[i]); 
        i++;
    }
    output[i] = '\0';

    
    printf("��ȯ�� ���ڿ�: %s\n", output);

    return 0;
}
