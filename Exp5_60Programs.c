/* Exp5_60Programs.c
   60 small array/function exercises (arrays, averages, sum, min/max)
   Single menu-driven file: choose program number 1-60 to run.
   Language: C
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exp5_p1(void);
void exp5_p2(void);
void exp5_p3(void);
void exp5_p4(void);
void exp5_p5(void);
void exp5_p6(void);
void exp5_p7(void);
void exp5_p8(void);
void exp5_p9(void);
void exp5_p10(void);
void exp5_p11(void);
void exp5_p12(void);
void exp5_p13(void);
void exp5_p14(void);
void exp5_p15(void);
void exp5_p16(void);
void exp5_p17(void);
void exp5_p18(void);
void exp5_p19(void);
void exp5_p20(void);
void exp5_p21(void);
void exp5_p22(void);
void exp5_p23(void);
void exp5_p24(void);
void exp5_p25(void);
void exp5_p26(void);
void exp5_p27(void);
void exp5_p28(void);
void exp5_p29(void);
void exp5_p30(void);
void exp5_p31(void);
void exp5_p32(void);
void exp5_p33(void);
void exp5_p34(void);
void exp5_p35(void);
void exp5_p36(void);
void exp5_p37(void);
void exp5_p38(void);
void exp5_p39(void);
void exp5_p40(void);
void exp5_p41(void);
void exp5_p42(void);
void exp5_p43(void);
void exp5_p44(void);
void exp5_p45(void);
void exp5_p46(void);
void exp5_p47(void);
void exp5_p48(void);
void exp5_p49(void);
void exp5_p50(void);
void exp5_p51(void);
void exp5_p52(void);
void exp5_p53(void);
void exp5_p54(void);
void exp5_p55(void);
void exp5_p56(void);
void exp5_p57(void);
void exp5_p58(void);
void exp5_p59(void);
void exp5_p60(void);

int main() {
    int choice;
    srand((unsigned)time(NULL));
    while (1) {
        printf("\n=== Exp5: Arrays & Functions (1-60) ===\n");
        printf("Enter program number (1-60) to run, 0 to exit: ");
        if (scanf("%d", &choice)!=1) { printf("Invalid input\n"); return 0; }
        if (choice==0) break;
        if (choice<1 || choice>60) { printf("Choose 1..60\n"); continue; }
        switch(choice) {
            case 1: exp5_p1(); break;
            case 2: exp5_p2(); break;
            case 3: exp5_p3(); break;
            case 4: exp5_p4(); break;
            case 5: exp5_p5(); break;
            case 6: exp5_p6(); break;
            case 7: exp5_p7(); break;
            case 8: exp5_p8(); break;
            case 9: exp5_p9(); break;
            case 10: exp5_p10(); break;
            case 11: exp5_p11(); break;
            case 12: exp5_p12(); break;
            case 13: exp5_p13(); break;
            case 14: exp5_p14(); break;
            case 15: exp5_p15(); break;
            case 16: exp5_p16(); break;
            case 17: exp5_p17(); break;
            case 18: exp5_p18(); break;
            case 19: exp5_p19(); break;
            case 20: exp5_p20(); break;
            case 21: exp5_p21(); break;
            case 22: exp5_p22(); break;
            case 23: exp5_p23(); break;
            case 24: exp5_p24(); break;
            case 25: exp5_p25(); break;
            case 26: exp5_p26(); break;
            case 27: exp5_p27(); break;
            case 28: exp5_p28(); break;
            case 29: exp5_p29(); break;
            case 30: exp5_p30(); break;
            case 31: exp5_p31(); break;
            case 32: exp5_p32(); break;
            case 33: exp5_p33(); break;
            case 34: exp5_p34(); break;
            case 35: exp5_p35(); break;
            case 36: exp5_p36(); break;
            case 37: exp5_p37(); break;
            case 38: exp5_p38(); break;
            case 39: exp5_p39(); break;
            case 40: exp5_p40(); break;
            case 41: exp5_p41(); break;
            case 42: exp5_p42(); break;
            case 43: exp5_p43(); break;
            case 44: exp5_p44(); break;
            case 45: exp5_p45(); break;
            case 46: exp5_p46(); break;
            case 47: exp5_p47(); break;
            case 48: exp5_p48(); break;
            case 49: exp5_p49(); break;
            case 50: exp5_p50(); break;
            case 51: exp5_p51(); break;
            case 52: exp5_p52(); break;
            case 53: exp5_p53(); break;
            case 54: exp5_p54(); break;
            case 55: exp5_p55(); break;
            case 56: exp5_p56(); break;
            case 57: exp5_p57(); break;
            case 58: exp5_p58(); break;
            case 59: exp5_p59(); break;
            case 60: exp5_p60(); break;
        }
    }
    printf("Exiting Exp5 menu.\n");
    return 0;
}


void exp5_p1(void) {{
    printf("\nExp5 - Program 1: Average of 5 integers (using for loop)\n");
    int a[5], sum=0;
    printf("Enter 5 integers: ");
    for(int i=0;i<5;i++) scanf("%d",&a[i]);
    for(int i=0;i<5;i++) sum+=a[i];
    printf("Average = %.2f\n", sum/5.0);
}}

void exp5_p2(void) {{
    printf("\nExp5 - Program 2: Average of N integers (user-size)\n");
    int n;
    printf("Enter N (max 100): ");
    scanf("%d",&n);
    if(n<=0 || n>100) {{ printf("Invalid N\n"); return; }}
    int arr[100], sum=0;
    printf("Enter %d integers:\n", n);
    for(int i=0;i<n;i++) {{ scanf("%d",&arr[i]); sum+=arr[i]; }}
    printf("Average = %.2f\n", (double)sum/n);
}}

void exp5_p3(void) {{
    printf("\nExp5 - Program 3: Average using a function (fixed 5)\n");
    int arr[5];
    for(int i=0;i<5;i++) {{ printf("Reading %d: ", i+1); scanf("%d", &arr[i]); }}
    int sum=0; for(int i=0;i<5;i++) sum+=arr[i];
    double avg = (double)sum/5;
    printf("Average = %.2f\n", avg);
}}

void exp5_p4(void) {{
    printf("\nExp5 - Program 4: Average of floats (sensor simulation)\n");
    float s[5];
    for(int i=0;i<5;i++) {{ printf("Enter reading %d: ", i+1); scanf("%f", &s[i]); }}
    float sum=0; for(int i=0;i<5;i++) sum+=s[i];
    printf("Average = %.2f\n", sum/5.0f);
}}

void exp5_p5(void) {{
    printf("\nExp5 - Program 5: Running average while reading (print after each input)\n");
    int n=5, x, sum=0;
    for(int i=1;i<=n;i++) {{
        printf("Enter value %d: ", i); scanf("%d", &x);
        sum += x;
        printf("Current average = %.2f\n", (double)sum/i);
    }}
}}

void exp5_p6(void) {{
    printf("\nExp5 - Program 6: Average of 5 integers (using for loop)\n");
    int a[5], sum=0;
    printf("Enter 5 integers: ");
    for(int i=0;i<5;i++) scanf("%d",&a[i]);
    for(int i=0;i<5;i++) sum+=a[i];
    printf("Average = %.2f\n", sum/5.0);
}}

void exp5_p7(void) {{
    printf("\nExp5 - Program 7: Average of N integers (user-size)\n");
    int n;
    printf("Enter N (max 100): ");
    scanf("%d",&n);
    if(n<=0 || n>100) {{ printf("Invalid N\n"); return; }}
    int arr[100], sum=0;
    printf("Enter %d integers:\n", n);
    for(int i=0;i<n;i++) {{ scanf("%d",&arr[i]); sum+=arr[i]; }}
    printf("Average = %.2f\n", (double)sum/n);
}}

void exp5_p8(void) {{
    printf("\nExp5 - Program 8: Average using a function (fixed 5)\n");
    int arr[5];
    for(int i=0;i<5;i++) {{ printf("Reading %d: ", i+1); scanf("%d", &arr[i]); }}
    int sum=0; for(int i=0;i<5;i++) sum+=arr[i];
    double avg = (double)sum/5;
    printf("Average = %.2f\n", avg);
}}

void exp5_p9(void) {{
    printf("\nExp5 - Program 9: Average of floats (sensor simulation)\n");
    float s[5];
    for(int i=0;i<5;i++) {{ printf("Enter reading %d: ", i+1); scanf("%f", &s[i]); }}
    float sum=0; for(int i=0;i<5;i++) sum+=s[i];
    printf("Average = %.2f\n", sum/5.0f);
}}

void exp5_p10(void) {{
    printf("\nExp5 - Program 10: Running average while reading (print after each input)\n");
    int n=5, x, sum=0;
    for(int i=1;i<=n;i++) {{
        printf("Enter value %d: ", i); scanf("%d", &x);
        sum += x;
        printf("Current average = %.2f\n", (double)sum/i);
    }}
}}

void exp5_p11(void) {{
    printf("\nExp5 - Program 11: Average of 5 integers (using for loop)\n");
    int a[5], sum=0;
    printf("Enter 5 integers: ");
    for(int i=0;i<5;i++) scanf("%d",&a[i]);
    for(int i=0;i<5;i++) sum+=a[i];
    printf("Average = %.2f\n", sum/5.0);
}}

void exp5_p12(void) {{
    printf("\nExp5 - Program 12: Average of N integers (user-size)\n");
    int n;
    printf("Enter N (max 100): ");
    scanf("%d",&n);
    if(n<=0 || n>100) {{ printf("Invalid N\n"); return; }}
    int arr[100], sum=0;
    printf("Enter %d integers:\n", n);
    for(int i=0;i<n;i++) {{ scanf("%d",&arr[i]); sum+=arr[i]; }}
    printf("Average = %.2f\n", (double)sum/n);
}}

void exp5_p13(void) {{
    printf("\nExp5 - Program 13: Average using a function (fixed 5)\n");
    int arr[5];
    for(int i=0;i<5;i++) {{ printf("Reading %d: ", i+1); scanf("%d", &arr[i]); }}
    int sum=0; for(int i=0;i<5;i++) sum+=arr[i];
    double avg = (double)sum/5;
    printf("Average = %.2f\n", avg);
}}

void exp5_p14(void) {{
    printf("\nExp5 - Program 14: Average of floats (sensor simulation)\n");
    float s[5];
    for(int i=0;i<5;i++) {{ printf("Enter reading %d: ", i+1); scanf("%f", &s[i]); }}
    float sum=0; for(int i=0;i<5;i++) sum+=s[i];
    printf("Average = %.2f\n", sum/5.0f);
}}

void exp5_p15(void) {{
    printf("\nExp5 - Program 15: Running average while reading (print after each input)\n");
    int n=5, x, sum=0;
    for(int i=1;i<=n;i++) {{
        printf("Enter value %d: ", i); scanf("%d", &x);
        sum += x;
        printf("Current average = %.2f\n", (double)sum/i);
    }}
}}

void exp5_p16(void) {{
    printf("\nExp5 - Program 16: Average of 5 integers (using for loop)\n");
    int a[5], sum=0;
    printf("Enter 5 integers: ");
    for(int i=0;i<5;i++) scanf("%d",&a[i]);
    for(int i=0;i<5;i++) sum+=a[i];
    printf("Average = %.2f\n", sum/5.0);
}}

void exp5_p17(void) {{
    printf("\nExp5 - Program 17: Average of N integers (user-size)\n");
    int n;
    printf("Enter N (max 100): ");
    scanf("%d",&n);
    if(n<=0 || n>100) {{ printf("Invalid N\n"); return; }}
    int arr[100], sum=0;
    printf("Enter %d integers:\n", n);
    for(int i=0;i<n;i++) {{ scanf("%d",&arr[i]); sum+=arr[i]; }}
    printf("Average = %.2f\n", (double)sum/n);
}}

void exp5_p18(void) {{
    printf("\nExp5 - Program 18: Average using a function (fixed 5)\n");
    int arr[5];
    for(int i=0;i<5;i++) {{ printf("Reading %d: ", i+1); scanf("%d", &arr[i]); }}
    int sum=0; for(int i=0;i<5;i++) sum+=arr[i];
    double avg = (double)sum/5;
    printf("Average = %.2f\n", avg);
}}

void exp5_p19(void) {{
    printf("\nExp5 - Program 19: Average of floats (sensor simulation)\n");
    float s[5];
    for(int i=0;i<5;i++) {{ printf("Enter reading %d: ", i+1); scanf("%f", &s[i]); }}
    float sum=0; for(int i=0;i<5;i++) sum+=s[i];
    printf("Average = %.2f\n", sum/5.0f);
}}

void exp5_p20(void) {{
    printf("\nExp5 - Program 20: Running average while reading (print after each input)\n");
    int n=5, x, sum=0;
    for(int i=1;i<=n;i++) {{
        printf("Enter value %d: ", i); scanf("%d", &x);
        sum += x;
        printf("Current average = %.2f\n", (double)sum/i);
    }}
}}

void exp5_p21(void) {{
    printf("\nExp5 - Program 21: Sum of N elements\n");
    int n; printf("Enter N (<=100): "); scanf("%d",&n);
    if(n<=0||n>100) {{ printf("Invalid N\n"); return; }}
    int arr[100], sum=0;
    for(int i=0;i<n;i++) {{ scanf("%d",&arr[i]); sum+=arr[i]; }}
    printf("Sum = %d\n", sum);
}}

void exp5_p22(void) {{
    printf("\nExp5 - Program 22: Find max and min of N numbers\n");
    int n; scanf("%d",&n);
    if(n<=0||n>100) {{ printf("Invalid N\n"); return; }}
    int arr[100];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int max=arr[0], min=arr[0];
    for(int i=1;i<n;i++) {{ if(arr[i]>max) max=arr[i]; if(arr[i]<min) min=arr[i]; }}
    printf("Max=%d Min=%d\n", max, min);
}}

void exp5_p23(void) {{
    printf("\nExp5 - Program 23: Count positive, negative and zeros\n");
    int n; scanf("%d",&n);
    int arr[100], p=0, neg=0, z=0;
    for(int i=0;i<n;i++) {{ scanf("%d",&arr[i]); if(arr[i]>0) p++; else if(arr[i]<0) neg++; else z++; }}
    printf("Positive=%d Negative=%d Zeros=%d\n", p, neg, z);
}}

void exp5_p24(void) {{
    printf("\nExp5 - Program 24: Reverse array and display\n");
    int n; scanf("%d",&n); int arr[100];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Reversed: ");
    for(int i=n-1;i>=0;i--) printf("%d ", arr[i]);
    printf("\n");
}}

void exp5_p25(void) {{
    printf("\nExp5 - Program 25: Copy array to another array\n");
    int n; scanf("%d", &n); int a[100], b[100];
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    for(int i=0;i<n;i++) b[i]=a[i];
    printf("Copied: ");
    for(int i=0;i<n;i++) printf("%d ", b[i]);
    printf("\n");
}}

void exp5_p26(void) {{
    printf("\nExp5 - Program 26: Simple bubble sort ascending (small N<=20)\n");
    int n; scanf("%d", &n); int a[20];
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    for(int i=0;i<n-1;i++) for(int j=0;j<n-1-i;j++) if(a[j]>a[j+1]) {{ int t=a[j]; a[j]=a[j+1]; a[j+1]=t; }}
    printf("Sorted: "); for(int i=0;i<n;i++) printf("%d ", a[i]); printf("\n");
}}

void exp5_p27(void) {{
    printf("\nExp5 - Program 27: Sum of N elements\n");
    int n; printf("Enter N (<=100): "); scanf("%d",&n);
    if(n<=0||n>100) {{ printf("Invalid N\n"); return; }}
    int arr[100], sum=0;
    for(int i=0;i<n;i++) {{ scanf("%d",&arr[i]); sum+=arr[i]; }}
    printf("Sum = %d\n", sum);
}}

void exp5_p28(void) {{
    printf("\nExp5 - Program 28: Find max and min of N numbers\n");
    int n; scanf("%d",&n);
    if(n<=0||n>100) {{ printf("Invalid N\n"); return; }}
    int arr[100];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int max=arr[0], min=arr[0];
    for(int i=1;i<n;i++) {{ if(arr[i]>max) max=arr[i]; if(arr[i]<min) min=arr[i]; }}
    printf("Max=%d Min=%d\n", max, min);
}}

void exp5_p29(void) {{
    printf("\nExp5 - Program 29: Count positive, negative and zeros\n");
    int n; scanf("%d",&n);
    int arr[100], p=0, neg=0, z=0;
    for(int i=0;i<n;i++) {{ scanf("%d",&arr[i]); if(arr[i]>0) p++; else if(arr[i]<0) neg++; else z++; }}
    printf("Positive=%d Negative=%d Zeros=%d\n", p, neg, z);
}}

void exp5_p30(void) {{
    printf("\nExp5 - Program 30: Reverse array and display\n");
    int n; scanf("%d",&n); int arr[100];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Reversed: ");
    for(int i=n-1;i>=0;i--) printf("%d ", arr[i]);
    printf("\n");
}}

void exp5_p31(void) {{
    printf("\nExp5 - Program 31: Copy array to another array\n");
    int n; scanf("%d", &n); int a[100], b[100];
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    for(int i=0;i<n;i++) b[i]=a[i];
    printf("Copied: ");
    for(int i=0;i<n;i++) printf("%d ", b[i]);
    printf("\n");
}}

void exp5_p32(void) {{
    printf("\nExp5 - Program 32: Simple bubble sort ascending (small N<=20)\n");
    int n; scanf("%d", &n); int a[20];
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    for(int i=0;i<n-1;i++) for(int j=0;j<n-1-i;j++) if(a[j]>a[j+1]) {{ int t=a[j]; a[j]=a[j+1]; a[j+1]=t; }}
    printf("Sorted: "); for(int i=0;i<n;i++) printf("%d ", a[i]); printf("\n");
}}

void exp5_p33(void) {{
    printf("\nExp5 - Program 33: Sum of N elements\n");
    int n; printf("Enter N (<=100): "); scanf("%d",&n);
    if(n<=0||n>100) {{ printf("Invalid N\n"); return; }}
    int arr[100], sum=0;
    for(int i=0;i<n;i++) {{ scanf("%d",&arr[i]); sum+=arr[i]; }}
    printf("Sum = %d\n", sum);
}}

void exp5_p34(void) {{
    printf("\nExp5 - Program 34: Find max and min of N numbers\n");
    int n; scanf("%d",&n);
    if(n<=0||n>100) {{ printf("Invalid N\n"); return; }}
    int arr[100];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int max=arr[0], min=arr[0];
    for(int i=1;i<n;i++) {{ if(arr[i]>max) max=arr[i]; if(arr[i]<min) min=arr[i]; }}
    printf("Max=%d Min=%d\n", max, min);
}}

void exp5_p35(void) {{
    printf("\nExp5 - Program 35: Count positive, negative and zeros\n");
    int n; scanf("%d",&n);
    int arr[100], p=0, neg=0, z=0;
    for(int i=0;i<n;i++) {{ scanf("%d",&arr[i]); if(arr[i]>0) p++; else if(arr[i]<0) neg++; else z++; }}
    printf("Positive=%d Negative=%d Zeros=%d\n", p, neg, z);
}}

void exp5_p36(void) {{
    printf("\nExp5 - Program 36: Reverse array and display\n");
    int n; scanf("%d",&n); int arr[100];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Reversed: ");
    for(int i=n-1;i>=0;i--) printf("%d ", arr[i]);
    printf("\n");
}}

void exp5_p37(void) {{
    printf("\nExp5 - Program 37: Copy array to another array\n");
    int n; scanf("%d", &n); int a[100], b[100];
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    for(int i=0;i<n;i++) b[i]=a[i];
    printf("Copied: ");
    for(int i=0;i<n;i++) printf("%d ", b[i]);
    printf("\n");
}}

void exp5_p38(void) {{
    printf("\nExp5 - Program 38: Simple bubble sort ascending (small N<=20)\n");
    int n; scanf("%d", &n); int a[20];
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    for(int i=0;i<n-1;i++) for(int j=0;j<n-1-i;j++) if(a[j]>a[j+1]) {{ int t=a[j]; a[j]=a[j+1]; a[j+1]=t; }}
    printf("Sorted: "); for(int i=0;i<n;i++) printf("%d ", a[i]); printf("\n");
}}

void exp5_p39(void) {{
    printf("\nExp5 - Program 39: Sum of N elements\n");
    int n; printf("Enter N (<=100): "); scanf("%d",&n);
    if(n<=0||n>100) {{ printf("Invalid N\n"); return; }}
    int arr[100], sum=0;
    for(int i=0;i<n;i++) {{ scanf("%d",&arr[i]); sum+=arr[i]; }}
    printf("Sum = %d\n", sum);
}}

void exp5_p40(void) {{
    printf("\nExp5 - Program 40: Find max and min of N numbers\n");
    int n; scanf("%d",&n);
    if(n<=0||n>100) {{ printf("Invalid N\n"); return; }}
    int arr[100];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int max=arr[0], min=arr[0];
    for(int i=1;i<n;i++) {{ if(arr[i]>max) max=arr[i]; if(arr[i]<min) min=arr[i]; }}
    printf("Max=%d Min=%d\n", max, min);
}}

void exp5_p41(void) {{
    printf("\nExp5 - Program 41: Simulate 5 sensor readings (random) and show average\n");
    int arr[5]; int sum=0;
    for(int i=0;i<5;i++) {{ arr[i] = rand()%101; printf("Sensor %d = %d\n", i+1, arr[i]); sum += arr[i]; }}
    printf("Average = %.2f\n", sum/5.0);
}}

void exp5_p42(void) {{
    printf("\nExp5 - Program 42: Moving average of last 3 readings (enter N readings)\n");
    int n; scanf("%d", &n);
    if(n<1) {{ printf("Invalid\n"); return; }}
    int a[100];
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    for(int i=0;i<n;i++) {{
        int start = (i-2>0)?i-2:0;
        int cnt = i - start + 1;
        int sum=0;
        for(int j=start;j<=i;j++) sum+=a[j];
        printf("Reading %d moving-avg=%0.2f\n", i+1, (double)sum/cnt);
    }}
}}

void exp5_p43(void) {{
    printf("\nExp5 - Program 43: Find nearest sensor (min distance) from 5 inputs\n");
    int d[5];
    for(int i=0;i<5;i++) scanf("%d", &d[i]);
    int min=d[0], idx=0;
    for(int i=1;i<5;i++) if(d[i]<min){{min=d[i]; idx=i;}}
    printf("Nearest sensor %d with distance %d\n", idx+1, min);
}}

void exp5_p44(void) {{
    printf("\nExp5 - Program 44: Threshold count - how many readings > threshold\n");
    int n, thr; scanf("%d %d", &n, &thr);
    int cnt=0, x;
    for(int i=0;i<n;i++) {{ scanf("%d", &x); if(x>thr) cnt++; }}
    printf("Count above %d = %d\n", thr, cnt);
}}

void exp5_p45(void) {{
    printf("\nExp5 - Program 45: Average excluding min and max (5 readings)\n");
    int a[5], sum=0;
    for(int i=0;i<5;i++) scanf("%d", &a[i]);
    int mx=a[0], mn=a[0];
    for(int i=1;i<5;i++) {{ if(a[i]>mx) mx=a[i]; if(a[i]<mn) mn=a[i]; sum+=a[i]; }}
    sum += a[0];
    sum=0; for(int i=0;i<5;i++) sum+=a[i];
    printf("Average excluding min(%d) and max(%d) = %.2f\n", mn, mx, (double)(sum-mn-mx)/3.0);
}}

void exp5_p46(void) {{
    printf("\nExp5 - Program 46: Normalize readings to 0..1 (floats)\n");
    int n; scanf("%d", &n);
    double a[100], mx=-1e9, mn=1e9;
    for(int i=0;i<n;i++) {{ scanf("%lf", &a[i]); if(a[i]>mx) mx=a[i]; if(a[i]<mn) mn=a[i]; }}
    printf("Normalized: "); for(int i=0;i<n;i++) {{
        double v = (mx==mn) ? 0.0 : (a[i]-mn)/(mx-mn);
        printf("%.2f ", v);
    }} printf("\n");
}}

void exp5_p47(void) {{
    printf("\nExp5 - Program 47: Simulate 5 sensor readings (random) and show average\n");
    int arr[5]; int sum=0;
    for(int i=0;i<5;i++) {{ arr[i] = rand()%101; printf("Sensor %d = %d\n", i+1, arr[i]); sum += arr[i]; }}
    printf("Average = %.2f\n", sum/5.0);
}}

void exp5_p48(void) {{
    printf("\nExp5 - Program 48: Moving average of last 3 readings (enter N readings)\n");
    int n; scanf("%d", &n);
    if(n<1) {{ printf("Invalid\n"); return; }}
    int a[100];
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    for(int i=0;i<n;i++) {{
        int start = (i-2>0)?i-2:0;
        int cnt = i - start + 1;
        int sum=0;
        for(int j=start;j<=i;j++) sum+=a[j];
        printf("Reading %d moving-avg=%0.2f\n", i+1, (double)sum/cnt);
    }}
}}

void exp5_p49(void) {{
    printf("\nExp5 - Program 49: Find nearest sensor (min distance) from 5 inputs\n");
    int d[5];
    for(int i=0;i<5;i++) scanf("%d", &d[i]);
    int min=d[0], idx=0;
    for(int i=1;i<5;i++) if(d[i]<min){{min=d[i]; idx=i;}}
    printf("Nearest sensor %d with distance %d\n", idx+1, min);
}}

void exp5_p50(void) {{
    printf("\nExp5 - Program 50: Threshold count - how many readings > threshold\n");
    int n, thr; scanf("%d %d", &n, &thr);
    int cnt=0, x;
    for(int i=0;i<n;i++) {{ scanf("%d", &x); if(x>thr) cnt++; }}
    printf("Count above %d = %d\n", thr, cnt);
}}

void exp5_p51(void) {{
    printf("\nExp5 - Program 51: Average excluding min and max (5 readings)\n");
    int a[5], sum=0;
    for(int i=0;i<5;i++) scanf("%d", &a[i]);
    int mx=a[0], mn=a[0];
    for(int i=1;i<5;i++) {{ if(a[i]>mx) mx=a[i]; if(a[i]<mn) mn=a[i]; sum+=a[i]; }}
    sum += a[0];
    sum=0; for(int i=0;i<5;i++) sum+=a[i];
    printf("Average excluding min(%d) and max(%d) = %.2f\n", mn, mx, (double)(sum-mn-mx)/3.0);
}}

void exp5_p52(void) {{
    printf("\nExp5 - Program 52: Normalize readings to 0..1 (floats)\n");
    int n; scanf("%d", &n);
    double a[100], mx=-1e9, mn=1e9;
    for(int i=0;i<n;i++) {{ scanf("%lf", &a[i]); if(a[i]>mx) mx=a[i]; if(a[i]<mn) mn=a[i]; }}
    printf("Normalized: "); for(int i=0;i<n;i++) {{
        double v = (mx==mn) ? 0.0 : (a[i]-mn)/(mx-mn);
        printf("%.2f ", v);
    }} printf("\n");
}}

void exp5_p53(void) {{
    printf("\nExp5 - Program 53: Simulate 5 sensor readings (random) and show average\n");
    int arr[5]; int sum=0;
    for(int i=0;i<5;i++) {{ arr[i] = rand()%101; printf("Sensor %d = %d\n", i+1, arr[i]); sum += arr[i]; }}
    printf("Average = %.2f\n", sum/5.0);
}}

void exp5_p54(void) {{
    printf("\nExp5 - Program 54: Moving average of last 3 readings (enter N readings)\n");
    int n; scanf("%d", &n);
    if(n<1) {{ printf("Invalid\n"); return; }}
    int a[100];
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    for(int i=0;i<n;i++) {{
        int start = (i-2>0)?i-2:0;
        int cnt = i - start + 1;
        int sum=0;
        for(int j=start;j<=i;j++) sum+=a[j];
        printf("Reading %d moving-avg=%0.2f\n", i+1, (double)sum/cnt);
    }}
}}

void exp5_p55(void) {{
    printf("\nExp5 - Program 55: Find nearest sensor (min distance) from 5 inputs\n");
    int d[5];
    for(int i=0;i<5;i++) scanf("%d", &d[i]);
    int min=d[0], idx=0;
    for(int i=1;i<5;i++) if(d[i]<min){{min=d[i]; idx=i;}}
    printf("Nearest sensor %d with distance %d\n", idx+1, min);
}}

void exp5_p56(void) {{
    printf("\nExp5 - Program 56: Threshold count - how many readings > threshold\n");
    int n, thr; scanf("%d %d", &n, &thr);
    int cnt=0, x;
    for(int i=0;i<n;i++) {{ scanf("%d", &x); if(x>thr) cnt++; }}
    printf("Count above %d = %d\n", thr, cnt);
}}

void exp5_p57(void) {{
    printf("\nExp5 - Program 57: Average excluding min and max (5 readings)\n");
    int a[5], sum=0;
    for(int i=0;i<5;i++) scanf("%d", &a[i]);
    int mx=a[0], mn=a[0];
    for(int i=1;i<5;i++) {{ if(a[i]>mx) mx=a[i]; if(a[i]<mn) mn=a[i]; sum+=a[i]; }}
    sum += a[0];
    sum=0; for(int i=0;i<5;i++) sum+=a[i];
    printf("Average excluding min(%d) and max(%d) = %.2f\n", mn, mx, (double)(sum-mn-mx)/3.0);
}}

void exp5_p58(void) {{
    printf("\nExp5 - Program 58: Normalize readings to 0..1 (floats)\n");
    int n; scanf("%d", &n);
    double a[100], mx=-1e9, mn=1e9;
    for(int i=0;i<n;i++) {{ scanf("%lf", &a[i]); if(a[i]>mx) mx=a[i]; if(a[i]<mn) mn=a[i]; }}
    printf("Normalized: "); for(int i=0;i<n;i++) {{
        double v = (mx==mn) ? 0.0 : (a[i]-mn)/(mx-mn);
        printf("%.2f ", v);
    }} printf("\n");
}}

void exp5_p59(void) {{
    printf("\nExp5 - Program 59: Simulate 5 sensor readings (random) and show average\n");
    int arr[5]; int sum=0;
    for(int i=0;i<5;i++) {{ arr[i] = rand()%101; printf("Sensor %d = %d\n", i+1, arr[i]); sum += arr[i]; }}
    printf("Average = %.2f\n", sum/5.0);
}}

void exp5_p60(void) {{
    printf("\nExp5 - Program 60: Moving average of last 3 readings (enter N readings)\n");
    int n; scanf("%d", &n);
    if(n<1) {{ printf("Invalid\n"); return; }}
    int a[100];
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    for(int i=0;i<n;i++) {{
        int start = (i-2>0)?i-2:0;
        int cnt = i - start + 1;
        int sum=0;
        for(int j=start;j<=i;j++) sum+=a[j];
        printf("Reading %d moving-avg=%0.2f\n", i+1, (double)sum/cnt);
    }}
}}
