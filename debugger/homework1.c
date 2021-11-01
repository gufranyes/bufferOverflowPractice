#include <stdio.h>

void secretWithBomb()
{
    printf("KABOOM!\nYou failed!\n");
    printf("now inside secret()!\n");
}

void entrance()
{
	int doNotTouch[444];
    // can only modify this section BEGIN
    // cant call secret(), maybe use secret (pointer to function)
    doNotTouch[450] = doNotTouch[446];
    doNotTouch[451] = doNotTouch[447];
    doNotTouch[512] = doNotTouch[454];
    doNotTouch[513] = doNotTouch[455];
    doNotTouch[446] = secretWithBomb + 14;
	// can only modify this section END
    printf("now inside entrance()!\n");
}

int main (int argc, char *argv[])
{
    entrance();
    return 0;
}

