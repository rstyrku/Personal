#include <iostream>
#include <pthread.h>


#define TOTAL_THREADS 4


int count;
pthread_mutex_t the_mutex;   //  phread mutex variable


void* myFunction(void* arg)
{
	int actual_arg = *((int*) arg);
    
	for(unsigned int i = 0; i < 10; ++i) {
        
        //  TODO:
        //  Use a Pthread mutex to controls
        //  access to the critical region.
        pthread_mutex_init(&the_mutex,NULL);
        
        
        //  Beginning of the critical region
        
        count++;
        std::cout << "Thread #" << actual_arg << " count = " << count << std::endl;
        
        //  End of the critical region
        
        
	}
    
	pthread_exit(NULL);
}


int main()
{
    int rc[TOTAL_THREADS];
    pthread_t ids[TOTAL_THREADS];
    int args[TOTAL_THREADS];
    
    
    //  TODO: Initialize the pthread mutex here
    
    
    count = 0;
    for(unsigned int i = 0; i < TOTAL_THREADS; ++i) {
        args[i] = i;
        rc[i] = pthread_create(&ids[i], NULL, myFunction, (void*) &args[i]);
    }
    
    for(unsigned int i = 0; i < TOTAL_THREADS; ++i) {
        pthread_join(ids[i], NULL);
    }
    
    std::cout << "Final count = " << count << std::endl;
    pthread_exit(NULL);
}
