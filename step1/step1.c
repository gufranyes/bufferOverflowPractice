#include <stdio.h>

void secret()
{
    printf("now inside secret()!\n");
}

void entrance()
{
	int doNotTouch[4];
    // can only modify this section BEGIN
    // cant call secret(), maybe use secret (pointer to function)
    doNotTouch[8] = doNotTouch[6];
    doNotTouch[9] = doNotTouch[7];
    doNotTouch[6] = secret;
    // can only modify this section END
    printf("now inside entrance()!\n");
}

int main (int argc, char *argv[])
{
    entrance();
    return 0;
}

