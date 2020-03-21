#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[256];
    char nick1[256];
    char nick2[256];
    char seq[2048];
} fasta;

char fmtfa(char *iname,char *oname){
    FILE *fi;
    FILE *fo;
    char line[4096]; 
    char *arr;
    fi = fopen(iname,"r");
    fo = fopen(oname,"a");
    if (fi==NULL | fo== NULL){
        return 1;
    }
    fasta *fa = (fasta  *)malloc(sizeof(fasta));
    while(fgets(line, sizeof(line), fi)!= NULL)
	{
        sscanf(line,"%[^\t]\t%[^\t]\t%[^\t]\t%[^\t]\t",fa->name,fa->nick1,fa->nick2,fa->seq);
		fprintf(fo,">%s|%s|%s\n%s\n",fa->name,fa->nick1,fa->nick2,fa->seq);
	}
	fclose(fi);
    fclose(fo);
};
int main(){
    fmtfa("./temp","./b.txt");
}

