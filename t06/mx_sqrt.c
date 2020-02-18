//#include <stdio.h>
int mx_sqrt(int x);
// int main(void){
//     printf("%d", mx_sqrt(46340*46340));
// }
int mx_sqrt(int x){
    int num = 1;
    if(x > 2147395600) return 0;
    while(x > num * num){
        num++;
    }
    if(x == num * num) return num;
    return 0;
}
