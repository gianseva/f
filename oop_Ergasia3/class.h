#include <iostream>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

enum Movement{impressionism = 0, expressionism, naturalism};
enum Condition{bad = 0, good, excellent};
enum Technique{oil = 0,aquarelle,tempera};
enum Material{iron = 0,stone,wood};

class Artifacts{
    private:
		int index;
		string creator; 
		int year;    
    public:
		Artifacts(int index, string creator, int year);
		Artifacts(const Artifacts &a);
		Artifacts();
		~Artifacts();
		virtual void getInfo();
		void getIndex();
};


class Masterpiece:public Artifacts{
	public:
		Masterpiece(int index,string creator,int year, Movement movem, Condition cond);
		Masterpiece(const Masterpiece &m);
		Masterpiece();
		~Masterpiece();
		void getInfo();
	private:	
		Movement movem;
	protected:
		Condition cond;
		
};


class Paintings:public Masterpiece{
	private:
	 int length;
	 int width;
	 Technique tech;
	public:
	Paintings(int index,string creator,int year,Movement movem,Condition cond,Technique tech,int length,int width);
	Paintings(const Paintings &p);
	Paintings();
	~Paintings();
	int surface();
	void getInfo();
	void evaluate(Movement movem, Condition cond);
};
class Sculptures:public Masterpiece{
	private:
	int volume;
	Material mater;
	public:
	Sculptures(int index,string creator,int year,Movement movem,Condition cond,Technique tech,int volume);	
	Sculptures(const Sculptures &s);
	Sculptures();
	~Sculptures();
	
	void getInfo();
//	evaluate(Movement mov,Condition condit);
};