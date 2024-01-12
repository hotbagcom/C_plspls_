#include<iostream>

int print_vector( int vector[], int const sizeof_vect );

    //bubble sorting
    int sort_bubble(int vectorb1[],int const sizeof_vect)
{
    
    int temp=0;
    for(int i=0 ; i<sizeof_vect ; i++)
    {
        for(int j=i ; j<sizeof_vect ; j++)
        {
            if(vectorb1[i]>vectorb1[j])
            {
                temp = vectorb1[j];
                vectorb1[j] = vectorb1[i];
                vectorb1[i] = temp;
            }
        }
    }
    return 0;
}
//merge sorting
    int merge(int vectorm2[], int const leftm2,int const midm2, int const rightm2)
    {
        int const subVectorOne = midm2 - leftm2 + 1; 
        int const subVectorTwo = rightm2 - midm2; 
        //vector is produced in template <Y>
        int *leftVector = new int[subVectorOne] ;
        int *rightVector = new int[subVectorTwo]; 

        for (int i = 0; i < subVectorOne; i++) 
		    leftVector[i] = vectorm2[leftm2 + i]; 
	    for (int j = 0; j < subVectorTwo; j++) 
		    rightVector[j] = vectorm2[midm2 + 1 + j]; 
            
        int indexOfSubVectorOne = 0;
		int indexOfSubVectorTwo = 0; 
        int indexOfMergedVector= leftm2; 

        while (indexOfSubVectorOne < subVectorOne &&
          indexOfSubVectorTwo < subVectorTwo) 
	    { 
            if (leftVector[indexOfSubVectorOne] <= 
              rightVector[indexOfSubVectorTwo]) 
            { 
                vectorm2[indexOfMergedVector] = 
                leftVector[indexOfSubVectorOne]; 
                indexOfSubVectorOne++; 
            } 
            else
            { 
                vectorm2[indexOfMergedVector] = 
                rightVector[indexOfSubVectorTwo]; 
                indexOfSubVectorTwo++; 
            } 
            indexOfMergedVector++; 
	    } 

        while (indexOfSubVectorOne < subVectorOne) 
        { 
            vectorm2[indexOfMergedVector] = 
            leftVector[indexOfSubVectorOne]; 
            indexOfSubVectorOne++; 
            indexOfMergedVector++; 
        } 
        	while (indexOfSubVectorTwo < subVectorTwo) 
        { 
            vectorm2[indexOfMergedVector] = 
            rightVector[indexOfSubVectorTwo]; 
            indexOfSubVectorTwo++; 
            indexOfMergedVector++; 
        } 

        return 0;
    }
    int sort_merge(int vectorm1[],int const firstm1,int const lastm1)
    {
        if (firstm1 >= lastm1) //you arrived smallest vector part
		    return 0; 
        int midm1 = firstm1 + (lastm1 - firstm1) / 2; 
        sort_merge(vectorm1, firstm1, midm1); 
	    sort_merge(vectorm1, midm1 + 1, lastm1);
	    merge(vectorm1, firstm1, midm1, lastm1); 
        
        return 0;
    }
   //quick 
    int quick(int vectorq2[], int begining, int sizeof_vect)
    {

        int pivot2 =  sizeof_vect-1 ; //devekuşu
        int temp_swap = 0;
          
        int inc_prev = begining-1 , inc_forw =0 ;   
        while( inc_forw<pivot2)
        {
            if(vectorq2[inc_forw] <= vectorq2[pivot2])
            {
                inc_prev++;
                if(vectorq2[inc_prev] < vectorq2[pivot2])
                {
                    temp_swap = vectorq2[inc_prev] ;
                    vectorq2[inc_prev] = vectorq2[inc_forw];
                    vectorq2[inc_forw] = temp_swap;  
                }
                
            }

            inc_forw++;
        }// operation
        temp_swap = vectorq2[inc_prev] ;
        vectorq2[inc_prev] = vectorq2[pivot2];
        vectorq2[pivot2] = temp_swap;  
                
        //there is no other option however take your precaution
        pivot2=inc_prev+1;
        return pivot2;
    }
    int sort_quick(int vectorq1[], int begining, int sizeof_vect)
    {
        if(begining<sizeof_vect-1)
        {
            int pivot1 = quick(vectorq1,begining,sizeof_vect);

            sort_quick( vectorq1,begining,pivot1);
            sort_quick(vectorq1,pivot1+1,sizeof_vect);
        }
        return 0;
    }
    //temlpate Y
    print_vector( int vector[], int const sizeof_vect )
    {
        std::cout<<"sorting  \n";
        std::cout<<" {  ";
        for(int i=0 ; i<sizeof_vect ; i++)
        {
            std::cout<< vector[i]<<"  ";
        }
        std::cout<<"}\n";
    
        return 0;
    }



int main()
{
    int a = 11;
    int merge[a] , quick[a];
    int bubble[20] = { 41 , 46 , 15 , 76 , 80 , 16 , 42 , 60 , 30 , 32 , 36 , 14 , 14 , 55 , 62 , 57 , 81 , 53 , 76 , 41 };
    
    copyVect_f2s(bubble, merge, a);
    copyVect_f2s(bubble, quick, a);
    sort_bubble(bubble, a);
    sort_merge(merge, 0, a-1);
    sort_quick(quick, 0, a-1);

    print_vector(bubble, a);
    print_vector(merge, a);
    print_vector(quick, a);
    

}