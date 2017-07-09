/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


void print_array(unsigned char array[],int length)///To print the array///
    {
	int i;
	printf("\nOriginal Array\n");
	for(i=0;i<length;i++){
	printf("%d ",array[i]);
	}
    }

void sort_array(unsigned char x[],int length)///sorting the aray with bubble sort///
	{
	unsigned char i,temp,step;
	unsigned char size=length;
	unsigned char y[length];

	for(step=0;step<size-1;step++)
	for(i=0;i<size-step-1;i++)
	{
	if (x[i]< x[i+1]) 
		{
		temp=x[i];
		x[i]=x[i+1];
		x[i+1]=temp;
		}
	}

	printf("\nSorted array\n");
	for(i=0;i<size;i++)
	{
	printf("%d ",x[i]);
	}
	}
unsigned char find_max(unsigned char x[], int length)///To find the maximum value in the array///
	{
	int i,max;
	max = x[0];
	for(i=1;i<length;i++)
	{
	if(max<x[i])
	{
	max=x[i];
	}
	}
	return max;
	}

unsigned char find_min(unsigned char x[], int length)///To find the minimum value in the array///
{
	int i,min;
	min = x[0];
	for(i=1;i<length;i++)
	{
	if(min>x[i])
	{
	min=x[i];
	}
	}
	return min;
}

unsigned char find_mean(unsigned char x[], int length)/// To find the mean of the sorted array///
{
	int i,sum;
	for(i=0;i<length;i++)
	{
	sum = sum + x[i];
	}
	return sum/length;
}

int find_median(unsigned char x[],int length)///To find the median in the sorted array///
{
	int i,median;
	for(i=0;i<=((length-1)/2);i++)
	{
	median = x[i];
	}
	return median;
}

void print_statistics(unsigned char x[],int length)///To print the max,min,mean and median in the array///
{
	printf("\nMaximum Value in Array is: %d \n", find_max(x, length));
	printf("\nMinimum Value in Array is: %d \n", find_min(x, length));
	printf("\nMean Value in Array is: %d \n", find_mean(x, length));
	printf("\nMedian in Array is: %d \n", find_median(x, length));
}
/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
