#include <stdio.h>
#include <stdlib.h>
struct course {
  int marks;
  char subject[30];
};

int main() {
  struct course *ptr;
  int noOfRecords;
  printf("Enter the number of records: ");
  scanf("%d", &noOfRecords);

  // Memory allocation for noOfRecords structures
  ptr = (struct course *)malloc(noOfRecords * sizeof(struct course));
  for (int i = 0; i < noOfRecords; ++i) {
    printf("Enter subject and marks:\n");
    scanf("%s %d", (ptr + i)->subject, &(ptr + i)->marks);
  }

  printf("Displaying Information:\n");
  for (int i = 0; i < noOfRecords; ++i) {
    printf("%s\t%d\n", (ptr + i)->subject, (ptr + i)->marks);
  }

  free(ptr);

  return 0;
}
