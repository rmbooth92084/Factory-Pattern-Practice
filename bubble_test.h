#ifndef __BUBBLE_TEST_H__
#define __BUBBLE_TEST_H__

#include "bubbleSort.h"
#include <vector>
//This test makes sure that it can sort a basic list
TEST(BubbleSort, SortingBasicList)
{
	std::vector<int> test = {9,8,7,6,5,4,3,2,1,0};
	int sorted[] = {0,1,2,3,4,5,6,7,8,9};
	
	for(int i = 0; i < test.size();i++)
	{
		EXPECT_EQ(BubbleSort(test).at(i),sorted[i]);
	}
	
}

TEST(BubbleSort, AlreadySortedList)
{
	std::vector<int> test = {1,2,3,4,5};
	int sorted[] = {1,2,3,4,5};
	
	for(int i = 0; i < test.size();i++)
	{
		EXPECT_EQ(BubbleSort(test).at(i),sorted[i]);
	}
	
}

TEST(BubbleSort, OneNumberLongList)
{
	std::vector<int> test = {0};
	int sorted[] = {0};
	
	for(int i = 0; i < test.size();i++)
	{
		EXPECT_EQ(BubbleSort(test).at(i),sorted[i]);
	}
	
}

TEST(BubbleSort, EmptyList)
{
	std::vector<int> test = {};
	
	EXPECT_EQ(BubbleSort(test),test);

	
}
#endif//__Bubble_test_h_
