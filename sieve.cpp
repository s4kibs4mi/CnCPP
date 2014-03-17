#include <iostream>
#include <vector>
#include <string>

#define MAX 20000000 // maximum number for prime check
#define LMT 10000 // square root of maximum number
#define ifc(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define isc(n) (flag[n>>6]|=(1<<((n>>1)&31)))

using namespace std;

unsigned flag[MAX>>6];

// in main call sieve to generate prime numbers
// sieve algorithm by zobayer hasan
void sieve(){
    unsigned i, j, k;
    for(i=3; i<LMT; i+=2)
        if(!ifc(i))
            for(j=i*i, k=i<<1; j<MAX; j+=k)
                isc(j);
}

int main(){

    return 0;
}
