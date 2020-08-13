#ifndef ARRAY
#define ARRAY
  typedef struct {
    int length;
    int size;
    int* arr;
  }Array;

void* createArray(int);
void display(const Array*);
void fillArray(Array*);
void append(Array*,int);
int pop(Array*);
int getLength(Array*);
int getSize(Array*);
void insert(Array*, int, int);
void clean(Array*);
#endif /* ifndef ARRAY */
