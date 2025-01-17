
// Program to write to a condition one line at a time to index.js file with C. The file reached 100 MB exactly with the maximum count of 2,226,043.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    

	    int i;
	    FILE *fp;
	    fp = fopen("index.js","w");
	    fprintf(fp,"function isEven(number) {\n");
	    fprintf(fp,"\t if(number === %d) return false;\n",1);
	    for(i=2;i<=2226043;i++) {
	    
		if(i%2==0) {
	            fprintf(fp,"\t else if(number === %d) return true;\n",i);    
	        }
	        
	        else {
	            fprintf(fp,"\t else if(number === %d) return false;\n",i);
	        }
		
	    }
	    
	    fprintf(fp,"\t else return true;\n");
	    
	    fprintf(fp,"} \nmodule.exports = isEven;");
	    fclose(fp);
}
