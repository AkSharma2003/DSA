// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     long long count=0;
//     cin>>n;
//     long long arr[n];
//     for(long int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(long int i=0;i<n;i++){
//         if(arr[i]>arr[i+1]){
//             count+=arr[i]-arr[i+1];
//             arr[i+1]=arr[i];
//         }
//     }
//     cout<<count<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     long long num;
//     cin>>num;
//     long long dnum=num;
//     long long n=1;

//     int sum=0;

//     while(dnum){
//         n*=5;
//         sum+=num/n;
//         dnum=num/n;
//     }
//     cout<<sum<<endl;

//     return 0;
// }

// // T
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     while(n--){
//         int a;
//         cin>>a;
//         int sum=0;
//         for(int i=0;i<a;i++){
//             int t;
//             cin>>t;
//             sum+=t;
//         }
//         if(sum==a){
//             cout<<0<<endl;
//         }
//         else if(sum<a){
//             cout<<1<<endl;
//         }
//         else{
//             cout<<sum-a<<endl;
//         }
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[4];
//     for(int i=0;i<4;i++){
//         cin>>arr[i];
//     }

//     int big=arr[0],small=arr[0];

//     for(int i=0;i<4;i++){
//         if(arr[i]>big){
//             big=arr[i];
//         }
//         if(arr[i]<small){
//             small=arr[i];
//         }
//     }

//     int b,s;
//     for(int i=0;i<4;i++){
//         if(arr[i]==big){
//             b=i;
//         }
//     }

//     for(int i=0;i<4;i++){
//         if(arr[i]==small && i!=b){
//             s=i;
//         }
//     }
//     cout<<big-small<<" ";
//     for(int i=0;i<4;i++){
//         if(i!=b && i!=s){
//             cout<<arr[i]-(big-small)<<" ";
//         }
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     while (n--)
//     {
//         int m;
//         cin>>m;
//         int arr[m],arr2[m];
//         for(int i=0;i<m;i++){
//             int t;
//             cin>>t;
//             arr[i]=t;
//             arr2[i]=t;
//         }

//         for(int i=0;i<m;i++){
//             for(int j=i;j<m;j++){
//                 if(arr2[i]>arr2[j]){
//                     int temp=arr2[i];
//                     arr2[i]=arr2[j];
//                     arr2[j]=temp;
//                 }
//             }
//         }
//         int ct=1;
//         for(int i=0;i<m;i++){
//             if(arr[i]==arr2[i]){}
//             else{
//                 ct=0;
//                 break;
//             }
//         }
//         if(ct){
//             cout<<"Yes"<<endl;
//         }
//         else{
//             cout<<"No"<<endl;
//         }
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     while (n--)
//     {
//         int m;
//         cin>>m;
//         int arr[m];
//         for(int i=0;i<m;i++){
//             cin>>arr[i];
//         }
//         int fl=0,sl=0;

//         for(int i=0;i<m;i++){
//             if(arr[i]>fl){
//                 fl=arr[i];
//             }
//         }
//         for(int i=0;i<m;i++){
//             if(arr[i]==fl){
//                 continue;
//             }
//             else{
//                 if(arr[i]>sl){
//                     sl=arr[i];
//                 }
//             }
//         }
//         cout<<sl+fl<<endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int k,l,m,n,d;
//     cin>>k;
//     cin>>l;
//     cin>>n;
//     cin>>m;
//     cin>>d;

//     int count=0;

//     for(int i=1;i<=d;i++){
//         if(i%k==0||i%l==0||i%m==0||i%n==0){
//             count++;
//         }
//     }

//     cout<<count<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int m,n;
//     cin>>m>>n;
//     int arr[m];
//     for(int i=0;i<m;i++){
//         cin>>arr[i];
//     }
//     int count=0;
//     for(int i=0;i<m;i++){
//         if(arr[i]>=arr[n-1] && arr[i]>0){
//             count++;
//         }
//     }
//     cout<<count<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n,k;
//     cin>>n>>k;
//     for(int i=0;i<k;i++){
//         if(n%10==0){
//             n/=10;
//         }
//         else
//         n-=1;
//     }
//     cout<<n<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n,k;
//     cin>>n>>k;

//     cout<<(n-k)*10000<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         if(n<1000){
//             cout<<100<<endl;
//         }
//         else{
//             cout<<n/10<<endl;
//         }
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         cout<<n*m<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n][3];
//     int sum=0;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//         if((arr[i][0]+arr[i][1]+arr[i][2])>=2){
//             sum+=1;
//         }
//     }
//     cout<<sum<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;

//     while(t--){
//         int n,x;
//         cin>>n>>x;
//         int arr[n];
//         arr[0]=0;
//         int g_tank=0;
//         for(int i=1;i<=n;i++){
//             cin>>arr[i];
//             if((arr[i]-arr[i-1])>g_tank){
//                 g_tank=arr[i]-arr[i-1];
//             }
//         }
//         if((x-arr[n])*2>g_tank){
//             g_tank=(x-arr[n])*2;
//         }
//         cout<<g_tank<<endl;
//     }

//     return 0;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int m,n;
//     cin>>m>>n;

//     int a=sqrt(m);
//     int b=sqrt(n);
//     int count=0;

//     for(int i=0;i<=a;i++){
//         for(int j=0;j<=b;j++){
//             if((i*i+j==m && j*j+i==n)||(i*i+j==n && j*j+i==m)){
//                 count++;
//             }
//         }
//     }
//     cout<<count<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     if(n==1){
//         cout<<1;
//     }
//     else if(n<4){
//         cout<<"NO SOLUTION";
//     }
//     else{
//         for(int i=2;i<=n;i=i+2){
//             cout<<i<<" ";
//         }
//         for(int i=1;i<=n;i=i+2){
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter length of array: ";
//     cin>>n;
//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=1;i<n;i+=2){
//         int swap;
//         swap=arr[i];
//         arr[i]=arr[i-1];
//         arr[i-1]=swap;
//     }

//     cout<<"Array is: \n";

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         int res = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//             res = res ^ arr[i];
//         }

//         cout<<res<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     int res;
//     cin>>n;
//     int arr[n]={0};
//     for(int i=0;i<n;i++){
//         int num;
//         cin>>num;
//         arr[num]+=1;
//         if(arr[num]>1)
//         res=num;
//     }
//     cout<<res<<endl;

//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    string s= "Ankit kumat   ";
    int len=s.length()-1;
    int count=0;
    while(len>=0 && s[len]==' '){
        len--;
    }
        while(len>=0 && s[len]!=' '){
            count++;
            len--;
        }

        cout<<count;
    return 0;
}
