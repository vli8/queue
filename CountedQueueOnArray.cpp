//Victor Li
//CountedQUeue function

#include "CountedQueueOnArray.h"
#include "FullQueue.h"
#include "EmptyQueue.h"
CountedQueueOnArray::CountedQueueOnArray(){

   length = 0;

}

void CountedQueueOnArray::Enqueue(ItemType newItem){

	try{
		QueueOnArray::Enqueue(newItem);
		length++;
	}
	catch(FullQueue e){
		throw FullQueue();
	}

}

void CountedQueueOnArray:: Dequeue(ItemType& item){

        try{
                QueueOnArray::Dequeue(item);
                length--;
        }
        catch(FullQueue e){
                throw EmptyQueue();
        }	


}

int CountedQueueOnArray::GetLength() const{

   return length;


}
