#include <stdio.h>
#include <stdlib.h>
int ayna_sayi_mi(int xyz){
	int x,y,z;
	x=xyz/100;
 	z=xyz%10;
    y=(xyz-(x*100))/10;
    if(x==z){
    	return 1;
	}
	return 0;
}
int main(int argc, char *argv[]) {
 int a,b,c,abc,i;
 printf("3 basamakli sayi giriniz: ");
 scanf("%d",&i);
 for(abc=100;abc<1000;abc++){
 	a=abc/100;
 	c=abc%10;
    b=(abc-(a*100))/10;
 	if(a==c){
 		printf("%d\n",abc);
	 }
 }
 printf("\n\n\n");
 printf("Girilen sayi ayna sayisi ise 1 degilse 0 ciktisi gelir\n\n");
 printf("%d",ayna_sayi_mi(i));
 
 
 
	return 0;
}
