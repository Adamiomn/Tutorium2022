// Paste this into compiler explorer (https://godbolt.org) and observe the assembly code generated. Now add -O1 to the compiler options to toggle optimization level 1. Watch the magic.

int fun1(int num) {
    num += 1;
    return num;
}


int fun2(int num) {
    for (int i = 1; i < 2; i++)
    {
        if (i == 1)
        {
            num += 1;
            break;
        }
        else
        {
            num += 15;
        }
    }
    return num;
}
