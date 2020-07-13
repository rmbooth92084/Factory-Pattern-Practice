#ifndef __SELECTION_TEST_H__
#define __SELECTION_TEST_H__

#include "selectionSort.h"
#include <vector>
TEST(SelectionSort, SortingBasicList)
{
	std::vector<int> vec = {9,8,7,6,5,4,3,2,1,0};
	int sorted[] = {0,1,2,3,4,5,6,7,8,9};

	std::vector<int> test = SelectionSort(vec);
	for(int i = 0; i < test.size();i++)
	{
		EXPECT_EQ(test.at(i),sorted[i]);
	}
	
}
TEST(SelectionSort, SortingBasicListWithNegatives)
{
	std::vector<int> test = {9,-8,7,6,-5,4,-3,2,-1,0};
	int sorted[] = {-8,-5,-3,-1,0,2,4,6,7,9};
	
	for(int i = 0; i < test.size();i++)
	{
		EXPECT_EQ(SelectionSort(test).at(i),sorted[i]);
	}
	
}

TEST(SelectionSort, SortingBasicListWithMultiDigitNums)
{
	std::vector<int> test = {90,8,700,6,5,40,3,26,12,0};
	int sorted[] = {0,3,5,6,8,12,26,40,90,700};
	
	for(int i = 0; i < test.size();i++)
	{
		EXPECT_EQ(SelectionSort(test).at(i),sorted[i]);
	}
	
}

TEST(SelectionSort, AlreadySortedList)
{
	std::vector<int> test = {1,2,3,4,5};
	int sorted[] = {1,2,3,4,5};
	
	for(int i = 0; i < test.size();i++)
	{
		EXPECT_EQ(SelectionSort(test).at(i),sorted[i]);
	}
	
}

TEST(SelectionSort, OneNumberLongList)
{
	std::vector<int> test = {0};
	int sorted[] = {0};
	
	for(int i = 0; i < test.size();i++)
	{
		EXPECT_EQ(SelectionSort(test).at(i),sorted[i]);
	}
	
}

TEST(SelectionSort, EmptyList)
{
	std::vector<int> test = {};
	
	EXPECT_EQ(SelectionSort(test),test);

	
}
#endif//__selection_test_h_
