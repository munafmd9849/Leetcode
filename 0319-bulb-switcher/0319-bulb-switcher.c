int bulbSwitch(int n) {
    // if (n == 0) {
    //     return 0;
    // } else if (n == 1) {
    //     return 1;
    // }
    // int a[n];
    // for (int i = 0; i < n; i++) {
    //     a[i] = 1;
    // }
    // for (int i = 2; i <= n; i++) {
    //     int j = i - 1;
    //     while (j < n) {
    //         if (a[j] == 1) {
    //             a[j] = 0;
    //         } else if (a[j] == 0) {
    //             a[j] = 1;
    //         }
    //         j = j + i;
    //     }
    // }

    // int c = 0;
    // for (int i = 0; i < n; i++) {
    //     if (a[i] == 1) {
    //         c++;
    //     }
    // }
    // return c;
    return sqrt(n);
}