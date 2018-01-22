#include "class.h"


/////////////////////////////--ARTIFACTS--///////////////////////////////

Artifacts::Artifacts(int index, string creator, int year){
    index = 0;
    creator = "creator";
    year = 0; 
    cout<<"Creating an instance of artifact"<<endl;

}

Artifacts::Artifacts(const Artifacts &a){
    index=a.index;
	creator=a.creator;
	year=a.year;
}
Artifacts::Artifacts(){
index = 0;
    creator = "creator";
    year = 0; 
}

Artifacts::~Artifacts(){

    cout<<"Destroying an instance of Artifacts"<<endl;
}
void Artifacts::getInfo(){
   
    cout<<"The creator is "<<creator<<endl;
    cout<<"the creation year is"<<year<<endl;
}
void Artifacts::getIndex(){
	
    cout<<"Index: "<<index<<endl;
}

/////////////////////////////--MASTERPIECE--///////////////////////////////

 Masterpiece::Masterpiece(int index,string creator,int year, Movement movem, Condition cond):Artifacts(index, creator, year),movem(movem),cond(cond){
    movem = impressionism;
	cond = good;
    cout<< "creating an instance of Masterpiece"<<endl;

}

Masterpiece::Masterpiece(const Masterpiece &m):Artifacts(m){
    cond = m.cond;
    movem = m.movem;

}
Masterpiece::Masterpiece():Artifacts(){
movem = impressionism;
	cond = good;
}
 Masterpiece::~Masterpiece(){
         
    cout<<"Destroying an instance of Masterpiece"<<endl;

 }

 void Masterpiece::getInfo(){
	Artifacts::getInfo();
	switch(movem){
		case 0:
			cout<<"Masterpiece's movement is impressionism"<<endl;
			break;
		case 1:
			cout<<"Masterpiece's movement is expressionism"<<endl;
			break;
		case 2:
			cout<<"Masterpiece's movement is naturalism"<<endl;
			break;
	}	

	switch(cond){
		case 0:
			cout<<"Masterpiece's condition is bad"<<endl;
			break;
		case 1:
			cout<<"Masterpiece's condition is good"<<endl;
			break;
		case 2:
			cout<<"Masterpiece's condition is excellent"<<endl;
			break;
	}	
}


/////////////////////////////--PAINTINGS--///////////////////////////////


Paintings::Paintings(int index,string creator,int year, Movement movem, Condition cond,Technique tech, int length, int width):Masterpiece(index, creator, year, movem, cond),length(length),width(width),tech(tech){
    
    length = 0;
    width = 0;
    tech = oil;
    cout<< "creating an instance of Paintings"<<endl;
}

Paintings::Paintings(const Paintings &p): Masterpiece(p){
    length = p.length;
    width = p.width;
    tech = p.tech;
}
Paintings::Paintings(): Masterpiece(){
  length = 0;
    width = 0;
    tech = oil;
}


Paintings::~Paintings(){
   
    cout<<"Destroying an instance of Masterpiece"<<endl;

}

int Paintings::surface(){

    return length*width;
}

void Paintings::getInfo(){
   
    Masterpiece::getInfo();
    	switch(tech){
		case 0:
			cout<<"Painting's technique is oil"<<endl;
			break;
		case 1:
			cout<<"Painting's technique is aquarelle"<<endl;
			break;
		case 2:
			cout<<"Painting's technique is tempera"<<endl;
			break;
	}	

    cout<<"Painting's surface is: "<<surface()<<endl;



}
/*
void Paintings::evaluate(Movement mov, Condition condit){
    if(movem == mov && condit == condit)
        cout<<"accept painting"<<endl;
    else
        cout<<"not aceept painting"<<endl;

}
*/
/////////////////////////////--SCULPTURES--///////////////////////////////


Sculptures::Sculptures(int index,string creator,int year, Movement movem, Condition cond,Technique tech, int volume):Masterpiece(index, creator, year, movem, cond){
    volume = 0;  
    mater = iron;
    cout<< "creating an instance of Sculptures"<<endl;

}

Sculptures::Sculptures(const Sculptures &s):Masterpiece(s){

}

Sculptures::Sculptures():Masterpiece(){


}
Sculptures::~Sculptures(){
    cout<<"Destroying an instance of Sculputes"<<endl;

}

void Sculptures::getInfo(){
	Masterpiece::getInfo();
	cout<<"Sculpture volume is: "<<volume<<endl;
	switch(mater){
		case 0:
			cout<<"Sculpture material is iron"<<endl;
			break;
		case 1:
			cout<<"Sculpture material is stone"<<endl;
			break;
		case 2:
			cout<<"Sculpture material is wood"<<endl;
			break;
	}	
}


//void Sculptures::evaluate(Movement mov,Condition condit){
    

//}