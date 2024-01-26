#include <stdio.h>
int A(float x,float y,float z){
    float a;
    a=(x-y)/z;
    printf("the A=%f",a);

    return 0;
}
int a_(float x,float y,float z){
    float a;
    a=2*((z-(x*y))/(y*y));
    printf("the A=%f",a);
    return 0;
}
int vf_(float x,float y,float z){
    float vf;
    vf=x+y*z;
    printf("VF=%f",vf);
    return 0;
}
int vi_(float x,float y,float z){
    float vi=x-y*z;
    printf("VI=%f",vi);
    return 0;
}
int t_(float x,float y,float z){
    float t=(x-y)/z;
    printf("T=%f",t);
    return 0;
}
int x$(float x,float y,float z) {
    float v;
    v = .5 * (y + x) * z;
    printf("X=%d",v);
    return 0;
}
int x__(int x,int y,int t) {
    int x_;
    x_ =(x*t)+(0.5*y*(t*t));
    printf("X=%d",x_);
    return 0;
}

int main()
{
    float vi=0,vf=0,a=0,x=0,t=0;
    char chooes,f;
    printf("what the problem :A or V or X or T ??");
    scanf(" %c",&chooes);
    if (chooes=='A'||chooes=='a'){
        printf("You have vf?\nenter y for yes or n for no");
        scanf(" %c",&f);
        if (f=='y'){
            printf("Enter Vf=");
            scanf("%f",&vf);
            printf("Enter VI=");
            scanf("%f",&vi);
            printf("Enter T=");
            scanf("%f",&t);
            A(vf,vi,t);
        }
        if (f=='n'){
            printf("Enter VI=");
            scanf("%f",&vi);
            printf("Enter T=");
            scanf("%f",&t);
            printf("Enter x=");
            scanf("%f",&x);
            a_(vi,t,x);
        }

    }
    if (chooes=='v'||chooes=='V'){
        char q;
        printf("Enter i for VI or F for Vf");
        scanf(" %c",&q);
        if (q=='i'){
            printf("Enter Vf=");
            scanf("%f",&vf);
            printf("Enter A=");
            scanf("%f",&a);
            printf("Enter T=");
            scanf("%f",&t);
            vi_(vf,a,t);
        }
        if (q=='f'){
            printf("Enter VI=");
            scanf("%f",&vi);
            printf("Enter A=");
            scanf("%f",&a);
            printf("Enter T=");
            scanf("%f",&t);
            vf_(vi,a,t);
        }
    }
    if (chooes=='t'){
        printf("Enter VI=");
        scanf("%f",&vi);
        printf("Enter Vf=");
        scanf("%f",&vf);
        printf("Enter A=");
        scanf("%f",&a);
        t_(vf,vi,a);
    }
    if(chooes=='x'){
        char v;
        printf("you have vf?\nEnter y for yes or n for no");
        scanf(" %c",&v);
        if (v=='n') {
            printf("Enter VI=");
            scanf("%f", &vi);
            printf("Enter A=");
            scanf("%f", &a);
            printf("Enter the T:");
            scanf("%f", &t);
            x__(vi,a,t);
        }
        if (v=='y'){
            printf("Enter VI=");
            scanf("%f", &vi);
            printf("Enter Vf=");
            scanf("%f", &vf);
            printf("Enter T:");
            scanf("%f",&t);
            x$(vi,vf,t);

        }
    }
}