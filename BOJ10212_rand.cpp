#include<cstdio>
#include<ctime>
#include<cstdlib>
int r;
int main() {
    srand(time(0));
    for (int i = 0; i < rand(); i++) r = rand() & 1;
    puts(r ? "Korea" : "Yonsei");
    return 0;
}