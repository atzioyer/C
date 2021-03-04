#include <stdio.h>
#include <math.h>

#define K 15

void prime (int n);
void binary (int q);

int main(){
    prime(K);
    return 1;
}
void binary (int q)
{
    int i=0;
    int base [5]={0};
    while (q != 0){
        base [i] = q%2;
        q /= 2;
    i=i+1;
    }

    for (int x = 4; x >= 0; --x)

    { printf("%01d, base[x]");

    }

    printf("\n");
}
void prime (int k)
{
    int count, i, flag, sr;
    int n=1;
    count = 1;

    while(count <= k){
        sr = sqrt(n);
        flag = 0;
        for(i=2; i<=sr; i++){
            if(n%i==0){
                flag = 1;
                break;
            }
            if(flag==0){
                binary(n);
                count ++;
            }
        }
        n++;
    }
}
