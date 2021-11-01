#include <stdio.h>

void secret1()
{
    printf("now inside first secret()!\n");
}

void secret2()
{
    printf("now inside second secret()!\n");
}

void entrance()
{
	int doNotTouch[44];
    // can only modify this section BEGIN
    // cant call secret(), maybe use secret (pointer to function)
    doNotTouch[50] = doNotTouch[46];
    doNotTouch[51] = doNotTouch[47];
    doNotTouch[48] = secret2;
    doNotTouch[49] = doNotTouch[47];
    doNotTouch[46] = secret1;
	// can only modify this section END
    printf("now inside entrance()!\n");
}

int main (int argc, char *argv[])
{
    entrance();
    return 0;
}

