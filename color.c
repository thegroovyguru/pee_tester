//call line_location_matrix
//call picture


#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>


int colour_analysis(line_location_matrix){

FILE *infile;
int num_rows=768;
int line_colour[2];
infile = fopen(capture.png,"r");

for (int j=0;2;j++)
	for (i=0;num_rows;i++)
		colour[i]=getpixel(i,line_location_matrix[j]);
	line_colour[j]=colour/num_rows;


return line_colour;
}
