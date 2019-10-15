#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CAPACITY = 10;
int size;

typedef struct task {
    int id;
    int priority;
}task;

int getLeftChildIndex(int i);
int getRightChildIndex(int i);
int getParentIndex(int i);
bool hasLeftChild(int i);
bool hasRightChild(int i);
bool hasParent(int i);
task leftChild(int i, task* taskList);
task rightChild(int i, task* taskList);
task parent(int i, task* taskList);
void swap(int i, int j, task* taskList);
void ensureExtraCapacity(task** taskList);
task peek(task *taskList);
task poll(task *taskList);
void addTask(task t, task* taskList);
void heapifyUp(task* taskList);
void heapifyDown(task* taskList);


int main() {
    task *taskList = malloc(sizeof(int)*CAPACITY);
    task task;
    int op;
    printf("\tIn this program the greater the priority value of the task, the higher is the priority of the task\n");
    for(int i = 0; i < 110; ++i)
            printf("-");
    printf("\n");
    do {
        printf("1...Enter a new task\n");
        printf("2...Remove highest priority task\n");
        printf("3...Show highest priority task\n");
        printf("4...Exit\n");
        printf("Enter you option below:\n");
        printf("-> "); scanf("%d", &op);
        printf("\n");
        
        switch(op) {
            case 1:
                printf("Enter the task ID:\n");
                printf("-> "); scanf("%d", &task.id);

                printf("Enter the task Priority:\n");
                printf("-> "); scanf("%d", &task.priority);

                addTask(task, taskList);
            break;
            case 2:
                task = poll(taskList);
                printf("Element Processed is:\n");
                printf("ID: %d\n", task.id);
                printf("Priority: %d\n", task.priority);
            break;
            case 3:
                task = peek(taskList);
                printf("Element Ready to be Processed first is:\n");
                printf("ID: %d\n", task.id);
                printf("Priority: %d\n", task.priority);
            break;
            case 4:
                // nothing to see here...
            break;
            default:
                printf("Invalid option entered, please try again !\n\n");
            break;
        }
        for(int i = 0; i < 100; ++i)
            printf("-");
        printf("\n");
    } while(op != 4);
    free(taskList);
    return 0;
}

void heapifyDown(task* taskList) {
    int index = 0;
    int greaterChildIndex = getLeftChildIndex(index);
    while(hasLeftChild(index)) {
        if(hasRightChild(index) && rightChild(index, taskList).priority > leftChild(index, taskList).priority) {
            greaterChildIndex = getRightChildIndex(index);
        }
        if(taskList[index].priority > taskList[greaterChildIndex].priority) {
            break;
        }
        else {
            swap(index, greaterChildIndex, taskList);
        }
        index = greaterChildIndex;
    }
}

void heapifyUp(task* taskList) {
    int index = size - 1;
    while(hasParent(index) && parent(index, taskList).priority < taskList[index].priority) {
        swap(getParentIndex(index), index, taskList);
        index = getParentIndex(index);
    }
}

void addTask(task t, task* taskList) {
    ensureExtraCapacity(&taskList);
    taskList[size] = t;
    ++size;
    heapifyUp(taskList);
}

task poll(task *taskList) {
    if(!size) {
        printf("Error !\n");
        exit(0);
    }
    task t = taskList[0];
    taskList[0] = taskList[size-1];
    --size;
    heapifyDown(taskList);
    return t;
}

task peek(task *taskList) {
    if(!size) {
        printf("Error !\n");
        exit(0);
    }
    return taskList[0];
}

void ensureExtraCapacity(task** taskList) {
    if(size > 2*CAPACITY/3)
        *taskList = realloc(*taskList,CAPACITY*=2);
}

void swap(int i, int j, task* taskList) {
    task temp = taskList[i];
    taskList[i] = taskList[j];
    taskList[j] = temp;
}

task parent(int i, task* taskList) {
    return taskList[getParentIndex(i)];
}

task rightChild(int i, task* taskList) {
    return taskList[getRightChildIndex(i)];
}

task leftChild(int i, task* taskList) {
    return taskList[getLeftChildIndex(i)];
}

bool hasParent(int i) {
    return getParentIndex(i) >= 0;
}

bool hasRightChild(int i) {
    return getRightChildIndex(i) < size;
}

bool hasLeftChild(int i) {
    return getLeftChildIndex(i) < size;
}

int getLeftChildIndex(int i) {
    return 2*i + 1;
}

int getRightChildIndex(int i) {
    return 2*i + 2;
}

int getParentIndex(int i) {
    return (i-1)/2;
}