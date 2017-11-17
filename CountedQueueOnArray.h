#include "QueueOnArray.h" 

class CountedQueueOnArray : public QueueOnArray{

   public: 
      CountedQueueOnArray();
      void Enqueue(ItemType newItem);
      void Dequeue(ItemType& item);
      int GetLength() const;
   private:
      int length;
};
