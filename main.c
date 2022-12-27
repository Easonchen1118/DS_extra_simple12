#include <stdio.h>
//遞迴程式練習https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30761
int func (int num, int ans) {
    if (num == 0 || num == 1) {
        ans = num + 1;
    }
    else {
        int temp = num / 2;
        ans = func(num-1, ans) + func(temp, ans);
    }
    return ans;
}

int main(){
    int inpt;
    scanf("%d", &inpt);
    int oupt = 0;
    oupt = func(inpt, oupt);
    printf("%d\n", oupt);
    return 0;
}
