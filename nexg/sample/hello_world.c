#include <Nexg.h>
#include <stdio.h>

int main() {
    NxResult result = NxStartServer();
    printf("%d\n",result);
    return 0;
}