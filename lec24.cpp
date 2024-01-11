# include <iostream>
using namespace std;

// int countPrime(int k){
//     // count how many numbers are prime under k
//     // Sieve of Eratosthenes 
//    int ar[k+1];
//    for(int i=0;i<=k;i++){
//     ar[i]=i;
//    }
//     int count=0;
//     if(k<=1){
//         cout<<"No prime numbers "<<endl;
//     }
//     if(k>=2){
//         for(int i=2;i<k;i++){
//             if(ar[i]!=0){
//                 count++;
//                 for(int j=2*i;j<=k;j=j+i){
//                     ar[j] = 0;
//                 }
//             }
//         }
//     }
//     return count;
// }

// bool isPrime(int k){
//     // find that k is prime or not
//     if(k<=1){
//         return 0;
//     }
    
//     for(int i=2;i<=k/2;i++){
//         if(k%i==0){

//             return 0;
//         }
//     }
//     return 1;
// }
// int main ()
// {
//     int k;
//     cout<<"Enter the number you want to find it is prime or not ";
//     cin>>k;
//     if(isPrime(k)){
//         cout<<"This number is prime "<<endl;
//     }
//     else{cout<<"This number is not prime"<<endl;}
//    cout<<countPrime(k);
 
 
// return 0;
// }

int GCD(int a , int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{b=b-a;}
    }
    return a;
}

int main(){
    int a,b;
    cout<<"Enter that two numbers HCF and LCM of those you want to find out ";
    cin>>a>>b;
    cout<<"The HCF of "<<a<<" and "<<b<<" is "<<GCD(a,b)<<endl;
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<(a*b)/GCD(a,b);
}

// fast exponentiation is not complete
// homework of this lecture  is impotant