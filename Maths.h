int sum(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
int mul(int a, int b){
    return a * b;
}
int div(int a, int b){
    return a / b;
}
int rem(int a, int b){
    return a % b;
}
int factorial(int a){
    int result = 1;
    while(a>1){
        result *= a;
        a--;}
    return result;
}
int evenOrOdd(int a){
    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}