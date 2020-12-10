#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Structure superMarket declared.
struct superMarket{
	int serviceTime;
	int waitTime;
	int front, back;
	struct superMarket *next;
};

//typedef structure
typedef struct superMarket sMarket;

//Functions
void PushInQueue(sMarket **, sMarket **);
void PopInQueue(sMarket **, sMarket **);
int QueueCount(sMarket **);
int MaxWaitTime(sMarket **);
void IncWaitTime(sMarket **);

int main()
{
//Variables in Main
sMarket *frontQue, *rearQue;

int timeTick, sTimeTick;

int custArrived;

//Default Value of both frontQue and rearQue
frontQue = rearQue = NULL;

//For Loop
for(timeTick = 1; timeTick <= 10; timeTick++)
{
//Random Customer
custArrived = rand()%2;

//If Customer Arrives
if(custArrived == 1)
{
	PushInQueue(&frontQue, &rearQue);
}
//Empty Queue
if(frontQue == NULL)
{
	printf("\n NO CUSTOMER IN QUEUE \n");
}

else
{

//For Loop Counter for Customer
for(sTimeTick = 1; sTimeTick <= frontQue->serviceTime; sTimeTick++)
{
	timeTick++;

	//Call Function IncWaitTime
	IncWaitTime(&frontQue->next);

	//0 new customer, 1 customer arrival/
	custArrived = rand() % 2;
	if(custArrived == 1)
	{
		//Call Function
		PushInQueue(&frontQue, &rearQue);
	}

	//Display Maximum QueueCount and WaitTime
	printf("\n The Maximum Queue Count at %d minute is %d",timeTick,QueueCount(&frontQue->next));

	printf("\n The Customer with maximum waiting time is %d minutes",
	MaxWaitTime(&frontQue->next));
	}

	//Call Function POP
	PopFromQueue(&frontQue, &rearQue);
		}
	}
}

void PushInQueue(sMarket **queFront, sMarket **queRear)
{
	//Variable declared
	sMarket *newNode;

	//Memory is allocated to new customer
	newNode = malloc(sizeof(sMarket));

//Random Value 1-4
newNode->serviceTime = 1+ rand() % 4;

//Default time of waitTime is 0;
newNode->waitTime = 0;

//Condition to check if Queue is empty
if(*queRear == NULL)
{
	//Customer is added to front of queue
	*queFront = newNode;
}
else
{
	//Customer is added to front of queue
	(*queRear)->next = newNode;
}

	*queRear = newNode;
}

	//Function PopFromQueue
void PopFromQueue(sMarket **queFront, sMarket **queRear)
{

	//Display info on popped element
	printf("\n\t\t Customer with %d service time pop",
	(*queFront)->serviceTime);

	//Pointer now points to the next customer in queue.
	*queFront = (*queFront)->next;

	//Check Queue
	if(*queFront == NULL)
	{
		*queRear=NULL;
	}

}

//Function QueueCount
int QueueCount(sMarket **queFront)
{
	sMarket *traceQue;

	//Numeric counter quecounter is assigned value 0
	int queCounter = 0;

	traceQue = *queFront;

	//Loop till pointer traceQue reaches last customer
	while(traceQue != NULL)
	{

		//increment the value by 1
		queCounter++;
		//Move TraceQue to next customertraceQue = traceQue->next;
	}
	//Return count to customers in Queue.
	return(queCounter);
}

//Function MaxWaitTime
int MaxWaitTime(sMarket **queFront)
{

	sMarket *traceQue;
	int maxWait = 0;
	//Pointer traceQue Points
	traceQue = *queFront;

	//While Loop executes till all customers are checked
	while(traceQue != NULL)
	{
	//Condition to check wait time
	if(traceQue->waitTime > maxWait)
	{
		//Variable maxWait is assigned the value of the waitime
		maxWait = traceQue->waitTime;
	}
	//TraceQue pointer moves to next Customer
	traceQue = traceQue->next;
	}

	return(maxWait);

}

void IncWaitTime(sMarket **queFront)
{
	//Pointer to structure declared.
	sMarket *traceQue;

	//Pointer points to the front of the queue.
	traceQue = *queFront;

	//Till last customer is reached.
	while(traceQue != NULL)
	{

	//Increment wait time by a minute
	traceQue->waitTime++;
	//Move to next Customer
	traceQue = traceQue->next;
}
}
