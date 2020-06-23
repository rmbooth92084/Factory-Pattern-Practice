#ifndef __BUBBLE_TEST_H__
#define __BUBBLE_TEST_H__

#include "bubbleSort.h"
//This test makes sure that it can sort a basic list
TEST(BubbleSort, SortingBasicList)
{
	int test[] = {9,8,7,6,5,4,3,2,1,0};
	int sorted[] = {0,1,2,3,4,5,6,7,8,9};
	
	for(int i = 0; i < sizeof(test); i++)
	{
		EXPECT_EQ(BubbleSort(test)[i],sorted[i]);
	}
	
}

#endif//__Bubble_test_h_
