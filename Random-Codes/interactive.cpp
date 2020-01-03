#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    int l = 1, r = 1000000;
    int count=0;
    while (l <= r && count <=24) {
        count++;
        int mid = (l + r + 1) / 2;
        printf("%d\n", mid);
        fflush(stdout);

        char response[3];
        scanf("%s", response);
        if (strcmp(response, "<") == 0)
            r = mid - 1;
        else
            l = mid;
    }

    printf("! %d\n", l);
    fflush(stdout);
}