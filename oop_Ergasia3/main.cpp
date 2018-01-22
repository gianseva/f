#include "class.h"




int main(int argc, char* argv[])
{ 
    int N,i,index,mov,con,tech,mater,year,length,width,volume;
    string creator;
   


    if (argc != 4) {
    cout<<"Wrong number of arguments"<<endl;
    return 1;
    }
    srand(time(NULL));
    N = atoi(argv[1]); 
    string movement=argv[2];
	string condition=argv[3];
    
    if(movement == "impressionism")
		mov = 0;
	else if(movement == "expressionism")
		mov = 1;
	else if(movement == "naturalism")
		mov = 2;
  
	

	if(condition == "bad")
		con = 0;
	else if(condition == "good")
		con = 1;
	else if(condition == "excellent")
		con = 2;
       
    Artifacts *pinAnti[N];
 

    for(i=0;i<N;i++){
        index = 0;
        int k = rand()%2;
        Movement  movem = Movement(rand() % 3);
        Condition cond =Condition (rand() % 3);
        Technique tech = Technique (rand() % 3);
        mater = rand() % 3;
        length = rand() % (100 - 30 + 1) +1;
        width = rand() % (100 - 30 + 1) +1;
        volume = rand() % (70 - 10 + 1 ) +1;
        year = rand() % 3;
        if(k == 0){
            Paintings *paint;
            pinAnti[i]=new Paintings(index,creator,year,movem,cond,tech,length,width);
    

    

           

        }
        


    }


    


    }