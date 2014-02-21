#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>


int line_detection(void){


//grey_image=loadImage("newBitmap.png");
FILE *infile;
int num_rows=768;
int pixels_per_row=1024;
int column_num;
int current_pixel_value;
int dark_pixel_counter[pixels_per_row];
int temp;
int current_highest[2];
int most_dark_line[2];
int line_location[2];
int previous_value=0;
int line_location_matrix[height][3];

infile=fopen(newBitmap.png,"r");
for (n=0;num_rows;n++)
	for (column_num=0: pixels_per_row;column_num++)
		current_pixel_value=getpixel(column_num,n);
		if (current_pixel_value>previous_value)
			temp=1;
		else
			temp=0;
		if((current_pixel_value<previous_value)&&temp==1)
			dark_pixel_counter[column_num]=dark_pixel_counter[column_num]+1;
		else
			dark_pixel_counter[column_num]=dark_pixel_counter[column_num];
	
		for (int i=0;2;i++)
			if (dark_pixel_counter[column_num]>current_highest[i])
				current_highest[i]=dark_pixel_counter[column_num];
			else
				current_highest[i]=current_highest[i];
				most_dark_line[i]=column_num;
			line_location[i]=most_dark_line[i];

for (int q=0;2;q++)
	for (int j=0;num_rows;j++)
		line_location_matrix[j][q]=line_location[q]


return line_location_matrix;
}
