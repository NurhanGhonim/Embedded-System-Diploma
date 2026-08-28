//
// Created by DELL on 8/28/2026.
//

#include<Stdio.h>
int fun() {
    static int num=16;
    return num--;
}

int main() {
    for (fun(); fun(); fun())
        printf("%d\t", fun());
    return 0;
}