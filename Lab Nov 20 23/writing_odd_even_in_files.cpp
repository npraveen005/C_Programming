/*Writing odd and even in seperate files*/

#include <stdio.h>

int main(){
	FILE *fp;
	int i;
	char c;
	fp = fopen("Z:\\C Programming\\Files\\Nov 20 23\\DATA.txt","r");
	while((c=getc(fp))!=EOF){
		if (( )getw(fp)%2 == 0){
			FILE *fp1;
			fp1 = fopen("Z:\\C Programming\\Files\\Nov 20 23\\EVEN.txt","w");
			putw(getw(fp),fp1);
			fclose(fp1);
		}
		else{
			FILE *fp2;
			fp2 = fopen("Z:\\C Programming\\Files\\Nov 20 23\\ODD.txt","w");
			putw(getw(fp),fp2);
			fclose(fp2);
		}
	}
	fseek(fp,0,0);
	fclose(fp);
	return 0;
}
