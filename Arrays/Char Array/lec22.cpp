// yeh vala lecture upar se chala gaya fir se karna hai 

// # include <iostream>
// using namespace std;
 
// int getlength(char name[]){
//     int count = 0;
//     for(int i=0;name[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }
// void reverse(char *name, int n){
//    char temp[n];
//     int j=0;
//     for(int i=n-1;i>=0;i--){
//         temp[j] = name[i];
//         j++;
//     }
//     // temp[j]='\0';  // yeh step chahe use karo chahe nhi work same rahega char array complete hone ke baad by default aage vale index me '\0' add kr leta hai 
//     for(int i=0;temp[i]!='\0';i++){
//         name[i] = temp[i];
//     }
// }
// int main ()
// {
//     char name[20];
//     cout<<"Enter your name "<<endl;
//     cin>>name;
//     cout<<"Your name is "<<name<<endl;
//     cout<<"Length of your name is "<<getlength(name)<<endl;
//     cout<<"After reverse the string is ";
//     reverse(name,getlength(name));
//     cout<<name<<endl;
    
//  return 0;
// }

// 2nd method to reverse an array of char or we can say a string 
// # include <iostream>
// using namespace std;

// int swap(char a[], char b[]){
//     int temp = *a;
//     *a = *b;
//     *b = temp;

// }

// void reverse(char name[], int n){
//     int s=0;
//     int e=n-1;
//     while(s<e){
//         swap(name[s++],name[e--]);
//         // i don't know but swap function is working without making a swap function just like it is an inbuilt function of iostream
//         // but it don't work in int array in same cicumstances
//     }
// }
// int getlength(char name[]){
//     int count = 0;
//     for(int i=0;name[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }
// int main ()
// {
//      char name[20];
//     cout<<"Enter your name "<<endl;
//     cin>>name;
//     cout<<"Your name is "<<name<<endl;
//     string pname = name; // to make a function finding out that a string is palindrom or not (means reverse of name is identical to name or not)
//     int len = getlength(name);
//     cout<<"Length of your name is "<<len<<endl;
//     cout<<"After reverse the string is ";
//     reverse(name,len);
//     cout<<name<<endl;
//     // below code is for finding out the string is palindrom or not
//     if(pname == name){
//         cout<<"Your string is Palindrom";
//     }
//     else{cout<<"Your string is not a Palindrom";}
//  return 0;
// }

// 2nd method to find the string is palindrom or not (without using extra space (without making new array))
// # include <iostream>
// using namespace std;

// bool checkPalindrom(char name[],int n){
//     int s=0;
//     int e= n-1;
//     while(s<e){
//         if(name[s]!=name[e]){
//             return 0;
//         }
//         else{s++;
//         e--;}
//     }
//     return 1;
// }

// int getlength(char name[]){
//     int count = 0;
//     for(int i=0;name[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }

// int main ()
// {
//      char name[20];
//     cout<<"Enter your name "<<endl;
//     cin>>name;
//     cout<<"Your name is "<<name<<endl;    
//      int len = getlength(name);
//     cout<<"Length of your name is "<<len<<endl;
//     // cout<<"After reverse the string is ";
//     // reverse(name,len);
//     // cout<<name<<endl;
//     if(checkPalindrom(name,len)==0){
//         cout<<"Your string is not a Palindrom"<<endl;
//     }
//     else{cout<<"Your string is a Palindrom"<<endl;}
//  return 0;
// }

// // Now we are going to find out palindrom in a way so that it is no more case sensitive 
// # include <iostream>
// using namespace std;


// char toLowerCase(char x){
//     if('A'<=x && x<='Z'){
//         x = (x-'A')+'a';
//         // converting uppercase in lower case
//         return x;
//     }
//     return x;
// }

// bool checkPalindrom(char name[],int n){
//     int s=0;
//     int e= n-1;

//     while(s<e){
        
//         if(toLowerCase(name[s]) != toLowerCase(name[e])){
//             return 0;
//         }
//         else{s++;
//         e--;}
//     }
//     return 1;
// }

// int getlength(char name[]){
//     int count = 0;
//     for(int i=0;name[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }

// int main ()
// {
//      char name[20];
//     cout<<"Enter your name "<<endl;
//     cin>>name;
//     cout<<"Your name is "<<name<<endl;    
//      int len = getlength(name);
//     cout<<"Length of your name is "<<len<<endl;
//     // cout<<"After reverse the string is ";
//     // reverse(name,len);
//     // cout<<name<<endl;
//     if(checkPalindrom(name,len)==0){
//         cout<<"Your string is not a Palindrom"<<endl;
//     }
//     else{cout<<"Your string is a Palindrom"<<endl;}
//  return 0;
// }


// // finding out maximum time occurred element or letter in a string-
// # include <iostream>
// using namespace std;

// char getMaxOccCharacter(string s){
//     int arr[26]={0};
//     //create an array of count of characters
//     for(int i=0;i<s.length();i++){
//         char ch = s[i];
//         // lowercase
//         int number = 0;
//         // if(ch>='a' && ch<='z'){
//              number = ch -'a';
//         // }
//         // else{//uppercase
//             // number = ch - 'A';}
//         arr[number]++;
//     }
//     int maxi = -1,ans=0; 
//     for(int i=0;i<26;i++){
//         if(maxi < arr[i]){
//             ans=i;
//             maxi = arr[i];
//         }
//     }
//     char finalAns = 'a'+ans;
//     return finalAns;
// }

// int main(){
//     string s;
//     cin>>s;
//     cout<< getMaxOccCharacter(s)<<endl;

//     return 0;
// }


# include <iostream>
# include <string>
using namespace std;

string replaceSpaces(string s[],int n){

}

int main ()
{
    string s[5];
    string temp[5];
    cout<<"Enter your sentence ";
    cin>>s[0]>>s[1]>>s[2]>>s[3];
    cout<<s[0]<<s[1]<<s[2]<<s[3]<<endl;
    for(int i=0;i<4;i++){
         temp[i]=s[i]+" ";
    }
    for(int i=0;i<4;i++){
        cout<<temp[i];
    }
 return 0;
}
