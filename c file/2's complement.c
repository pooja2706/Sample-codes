#include <stdio.h>
int main(){
   int n;
   printf("Enter the number of bits :");
   scanf("%d",&n);
   char binary[n+1];
   char onescomplement[n+1];
   char twoscomplement[n+1];
   int carry=1;
   printf("Enter the binary number:");
   scanf("%s", &binary);
   for(int i=0;i<n;i++){
       if(binary[i]=='0')
       onescomplement[i]='1';
       else if(binary[i]=='1')
       onescomplement[i]='0';
   }
   onescomplement[n]='\0';
printf("\nThe twos complement of a binary number is : ");
for(int i=n-1; i>=0; i--){
        if(onescomplement[i] == '1' && carry == 1)
            twoscomplement[i] = '0';
        else if(onescomplement[i] == '0' && carry == 1){
            twoscomplement[i] = '1';
            carry = 0;
        }
        else twoscomplement[i] = onescomplement[i];
    }
twoscomplement[n]='\0';
printf("%s",twoscomplement);
return 0;
}