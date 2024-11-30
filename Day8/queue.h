int enQueue(float *que, int rp, int size); 
int deQueue(float *queue, int fp, int rp);
void displayQueue(const float *que, int fp, int rp);
int isEmpty(int fp, int rp);
int isFull(int rp, int size);
void firstElement(const float *queue, int fp, int rp);