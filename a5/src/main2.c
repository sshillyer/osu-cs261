#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "dynamicArray.h"
#include "toDoList.h"



int main(int argc, const char * argv[])
{
  	TYPE task1;
	TYPE task2;
	TYPE task3;
	TYPE task4;
	TYPE task5;
	TYPE task6;
	TYPE task7;
	TYPE task8;
	TYPE task9;
	TYPE task10;
	TYPE task11;
	TYPE task12;
	TYPE task13;
	TYPE task14;

	DynArr *mainList;
	mainList = createDynArr(10);

	/* create tasks */
	task1 = createTask(9, "task 1");
	task2 = createTask(3, "task 2");
	task3 = createTask(2, "task 3");
	task4 = createTask(4, "task 4");
	task5 = createTask(5, "task 5");
	task6 = createTask(7, "task 6");
	task7 = createTask(8, "task 7");
	task8 = createTask(6, "task 8");
	task9 = createTask(1, "task 9");
	task10 = createTask(14, "task 10");
	task11 = createTask(13, "task 11");
	task12 = createTask(12, "task 12");
	task13 = createTask(11, "task 13");
	task14 = createTask(10, "task 14");

	/* add tasks to the dynamic array */
	addHeap(mainList, task1, compare);
	addHeap(mainList, task2, compare);
	addHeap(mainList, task3, compare);
	addHeap(mainList, task4, compare);
	addHeap(mainList, task5, compare);
	addHeap(mainList, task6, compare);
	addHeap(mainList, task7, compare);
	addHeap(mainList, task8, compare);
	addHeap(mainList, task9, compare);
	addHeap(mainList, task10, compare);
	addHeap(mainList, task11, compare);
	addHeap(mainList, task12, compare);
	addHeap(mainList, task13, compare);
	addHeap(mainList, task14, compare);


	printf("Before Sort Called \n");
    printDynArr(mainList, print_type);

	/* sort tasks */
	sortHeap(mainList, compare);

	printf("After Sort Called \n");

	/* print sorted tasks from the dynamic array */
	printDynArr(mainList, print_type);

	removeMinHeap(mainList, compare);
	printf("removeMinHeap called...");
	printDynArr(mainList, print_type);

	return 0;
}
