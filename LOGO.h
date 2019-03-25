/*
author: Kyriazis
*/
#pragma once

#ifndef LOGO_H
#define LOGO_H

#include <iostream>
#include <vector>
#include <sstream>
#include <regex>
#include "./hy352_gui.h"
#include <stdio.h>
#include <stdarg.h>
using namespace std;


#ifdef APPLE
#include <allegro5/allegro.h> //**
#endif




#define START_PROGRAM int main(){  init_GUI(); Wrapper xyz =0;

#define END_PROGRAM ;destroy_GUI(); return 0; }





#define NUMBER  Wrapper() = false?false

#define WORD Wrapper() = false?false

#define BOOLEAN Wrapper() = false?false

#define FALSE false

#define TRUE true

#define ASSIGN ;

#define MAKE ; Wrapper



#define LIST Wrapper()

#define ARRAY Wrapper() =

#define SIZE   Wrapper() = tmp() = false?false

#define SENTENCE Wrapper()

#define ITEM(x,y) getItemArray(x,y)

#define SETITEM(x,y,z) ;setItemArray(x,y,z);




#define SUM(...) Wrapper() = sum(__VA_ARGS__)

#define PRODUCT(...) Wrapper() = product(__VA_ARGS__)

#define MINUS(x) Wrapper() = minuss(x);

#define DIFFERENCE(x,y) Wrapper() =diff(x,y);

#define MODULO(x,y) Wrapper() =modulo(x,y);

#define QUOTIENT(x,y) Wrapper() = quotient(x,y);



#define AND(...) andd(__VA_ARGS__)

#define OR(...) orr(__VA_ARGS__)

#define NOT(x) nott(x)






#define REPEAT ;for (xyz.setNumberValue(0); xyz.getNumberValue() <

#define TIMES ; 

#define REPCOUNT xyz

#define DO ) {

#define END ;xyz.setNumberValue(xyz.getNumberValue() +1) ;}

#define WHILE 0;); xyz.setNumberValue(0); while(

#define FOREACH ; xyz.setNumberValue(0);for(Wrapper ELEM : Wrapper() +





#define IF ;if(

#define ELIF ;}else if(

#define ELSE ;}else{








#define TO void

#define WITH ( 

#define args Wrapper arg_list

#define FSTART ){Wrapper xyz=0;

#define FEND ;}

#define ARG(x) arg(arg_list,x)

#define ARGS arg_list

#define CALL ;

#define RETURN ;return;

#define SHOW ; show() = false?false


//FUNCTIONS FOR MOVES
#define FORWARD  ;funcs(1)=

#define BACK	 ;funcs(2)=

#define RIGHT	 ;funcs(3)=

#define LEFT	;funcs(4)=

#define CIRCLE ;funcs(5)=

#define SETPENSIZE ;funcs(6)=

#define	CENTER ;turtle_go_to_center();

#define PENUP ; pen_up();

#define PENDOWN ;pen_down();

#define SETSCREENCOLOR ;funcs(7)=

#define SETPENCOLOR ;funcs(8)=

#define SETXY ;funcs(9)=

#define PRINT ;funcs()=




//CLASS


class tmp {

private:
	float x;
public:
	tmp(void) {};
	tmp(float x) {
		this->x = x;
	}
	float getX() {
		return x;
	}
	void setX(float x) {
		this->x = x;
	}
	~tmp(void) {};
};





enum type_t { ENUM_EMPTY, ENUM_NUMBER, ENUM_STRING, ENUM_BOOL, ENUM_LIST, ENUM_ARRAY, ENUM_SENTENCE };


class Wrapper
{

private:

	float number_value;
	const char * str_value;
	bool bool_value;
	type_t type;

	std::vector<Wrapper> wrapper_vector;


public:

	//CONSTRUCTORS
	Wrapper(void) {

		this->type = ENUM_EMPTY;
		this->number_value = -1;
		this->bool_value = false;
		this->str_value = " ";
		// this->wrapper_vector.push_back(* this);
	};

	Wrapper(int int_val) {

		//cout << "@IntConstructor(" << int_val << ")" << endl;

		this->number_value = (float)int_val;
		this->bool_value = false;
		this->str_value = " ";
		this->type = ENUM_NUMBER;
		this->wrapper_vector.push_back(* this);
	}


	Wrapper(float float_val) {

		//cout << "@FloatConstructor(" << float_val << ")" << endl;

		this->number_value = float_val;
		this->str_value = " ";
		this->type = ENUM_NUMBER;
		this->bool_value = false;
		this->wrapper_vector.push_back(* this);
	}

	Wrapper(double double_val) {

		//cout << "@DoubleConstructor(" << double_val << ")" << endl;

		this->number_value = (float)double_val;
		this->str_value = " ";
		this->type = ENUM_NUMBER;
		this->bool_value = false;
		this->wrapper_vector.push_back(* this);
	}


	Wrapper(const char * str_val) {

		//cout << "@ConstCharConstructor(" << str_val << ")" << endl;

		this->number_value = -1;
		this->str_value = str_val;
		this->type = ENUM_STRING;
		this->bool_value = false;
		this->wrapper_vector.push_back(* this);
	}


	Wrapper(bool bool_val) {

		//cout << "@BoolConstructor(" << bool_val << ")" << endl;

		this->bool_value = bool_val;
		this->type = ENUM_BOOL;
		this->number_value = -1;
		this->str_value = " ";
		this->wrapper_vector.push_back(* this);
	}

	Wrapper(std::initializer_list <Wrapper>  new_array) {

		//cout << "@initializer_listConstructor(" << new_array << ")" << endl;

		this->bool_value = false;
		this->type = ENUM_ARRAY;
		this->number_value = -1;
		this->str_value = " ";
		this->setArray(new_array);
	}

	Wrapper(std::vector <Wrapper>  new_sentence) {

		//cout << "@vectorConstructor(" << ")" << endl;

		this->bool_value = false;
		this->type = ENUM_SENTENCE;
		this->number_value = -1;
		this->str_value = " ";
		this->setSentence(new_sentence);

	}

	Wrapper(tmp x) {

		//cout << "@hope(" << ")" << endl;
		this->type = ENUM_ARRAY;
		this->number_value = -1;
		this->str_value = " ";
		this->initArray(x.getX());

	}







	//ACCESSORS AND MUTATORS

	type_t getType() {
		return this->type;
	}

	void setType(type_t tmp_type) {
		this->type = tmp_type;
	}

	float getNumberValue() {
		return this->number_value;
	}

	void setNumberValue(int val) {
		this->number_value = (float)val;
	}

	void setNumberValue(float val) {
		this->number_value = val;
	}

	void setNumberValue(double val) {
		this->number_value = (float)val;
	}



	bool getBoolValue() {
		return this->bool_value;
	}

	void setBoolValue(bool val) {
		this->bool_value = val;
	}



	const char * getStringValue() {
		return this->str_value;
	}

	void setStringValue(const char * val) {
		this->str_value = val;
	}






	std::vector<Wrapper> getList() {

		return this->wrapper_vector;
	}

	void setList(std::vector <Wrapper> new_list) {
		this->wrapper_vector = new_list;
	}


	void addToList(Wrapper new_item) {
		this->wrapper_vector.push_back(new_item);
	}

	void popFromList() {
		this->wrapper_vector.pop_back();
	}

	void clearList() {
		this->wrapper_vector.clear();
	}








	std::vector<Wrapper> getArray() {

		return this->wrapper_vector;
	}

	void setArray(std::vector <Wrapper> new_Array) {
		this->wrapper_vector = new_Array;
	}


	void addToArray(Wrapper new_item) {
		this->wrapper_vector.push_back(new_item);
	}

	void popFromArray() {
		this->wrapper_vector.pop_back();
	}

	void clearArray() {
		this->wrapper_vector.clear();
	}


	Wrapper getObjArray(int n) {

		if (n <= (int)this->wrapper_vector.size()) {

			return this->wrapper_vector.at(n - 1);
		}
		else {

			cout << "Invalid Array size";
			return nullptr;
		}
	}

	void setObjArray(int n, Wrapper wp) {

		if (n <= (int)this->wrapper_vector.size()) {

			this->wrapper_vector.at(n - 1) = wp;

		}
		else {
			cout << "Invalid Array size";
		}
	}


	void initArray(float n) {
		std::vector<Wrapper> myvector((const unsigned int)n);
		this->setArray(myvector);
	}



	std::vector<Wrapper> getSentence() {

		return this->wrapper_vector;
	}

	void setSentence(std::vector <Wrapper> new_Sentence) {
		this->wrapper_vector = new_Sentence;
	}


	void addToSentence(Wrapper new_item) {
		this->wrapper_vector.push_back(new_item);
	}

	void popFromSentence() {
		this->wrapper_vector.pop_back();
	}

	void clearSentence() {
		this->wrapper_vector.clear();
	}






	//OVERLOADING



	Wrapper operator[](Wrapper wp) {
		// cout << "@@@operator [] " << endl << wp.toString() << endl << "op end";
		this->setList(wp.getList());
		this->setType(ENUM_LIST);
		return *this;
	}




	vector<Wrapper> operator()(Wrapper i) {
		vector<Wrapper> ret;
		ret.insert(ret.begin(), i);

		return ret;
	}

	template <class... R>
	vector<Wrapper> operator()(Wrapper i, R... r) {

		vector<Wrapper> ret = operator()(r...);
		ret.insert(ret.begin(), i);
		return ret;
	}





	// this, next
	Wrapper operator,(Wrapper next) {
	
		this->addToList(next);
		return * this;
	}



	bool operator==(Wrapper new_item) {

		//cout << "THIS : " << this->getNumberValue() << "NEW:" << new_item.getNumberValue();
		if (
			this->getNumberValue() == new_item.getNumberValue() && this->getType() == ENUM_NUMBER && new_item.getType() == ENUM_NUMBER ||
			this->getStringValue() == new_item.getStringValue() && this->getType() == ENUM_STRING && new_item.getType() == ENUM_STRING ||
			this->getBoolValue() == new_item.getBoolValue() && this->getType() == ENUM_BOOL && new_item.getType() == ENUM_BOOL
			) {

			return true;
		}
		else {
			return false;
		}
	}

	bool operator!=(Wrapper new_item) {

		//cout << "THIS : " << this->getNumberValue() << "NEW:" << new_item.getNumberValue();
		if (
			this->getNumberValue() != new_item.getNumberValue() && this->getType() == ENUM_NUMBER && new_item.getType() == ENUM_NUMBER ||
			this->getStringValue() != new_item.getStringValue() && this->getType() == ENUM_STRING && new_item.getType() == ENUM_STRING ||
			this->getBoolValue() != new_item.getBoolValue() && this->getType() == ENUM_BOOL && new_item.getType() == ENUM_BOOL
			) {

			return true;
		}
		else {
			return false;
		}
	}

	bool operator>(Wrapper new_item) {

		//cout << "THIS : " << this->getNumberValue() << "NEW:" << new_item.getNumberValue();
		if (
			this->getNumberValue() > new_item.getNumberValue() && this->getType() == ENUM_NUMBER && new_item.getType() == ENUM_NUMBER ||
			this->getStringValue() > new_item.getStringValue() && this->getType() == ENUM_STRING && new_item.getType() == ENUM_STRING
			) {

			return true;
		}
		else {
			return false;
		}
	}


	bool operator<(Wrapper new_item) {

		//cout << "THIS : " << this->getNumberValue() << "NEW:" << new_item.getNumberValue();
		if (
			this->getNumberValue() < new_item.getNumberValue() && this->getType() == ENUM_NUMBER && new_item.getType() == ENUM_NUMBER ||
			this->getStringValue() < new_item.getStringValue() && this->getType() == ENUM_STRING && new_item.getType() == ENUM_STRING
			) {

			return true;
		}
		else {
			return false;
		}
	}

	bool operator<=(Wrapper new_item) {

		//cout << "THIS : " << this->getNumberValue() << "NEW:" << new_item.getNumberValue();
		if (
			this->getNumberValue() <= new_item.getNumberValue() && this->getType() == ENUM_NUMBER && new_item.getType() == ENUM_NUMBER ||
			this->getStringValue() <= new_item.getStringValue() && this->getType() == ENUM_STRING && new_item.getType() == ENUM_STRING
			) {

			return true;
		}
		else {
			return false;
		}
	}


	bool operator>=(Wrapper new_item) {

		//cout << "THIS : " << this->getNumberValue() << "NEW:" << new_item.getNumberValue();
		if (
			this->getNumberValue() >= new_item.getNumberValue() && this->getType() == ENUM_NUMBER && new_item.getType() == ENUM_NUMBER ||
			this->getStringValue() >= new_item.getStringValue() && this->getType() == ENUM_STRING && new_item.getType() == ENUM_STRING
			) {

			return true;
		}
		else {
			return false;
		}
	}







	~Wrapper(void) {};


	//STRINGS

	string typeToString(type_t type_tmp) {

		if (type_tmp == ENUM_NUMBER)
			return "NUMBER";
		else if (type_tmp == ENUM_BOOL)
			return "BOOL";
		else if (type_tmp == ENUM_STRING)
			return "STRING";
		else if (type_tmp == ENUM_LIST)
			return "LIST";
		else if (type_tmp == ENUM_ARRAY)
			return "ARRAY";
		else if (type_tmp == ENUM_SENTENCE)
			return "SENTENCE";
		else if (type_tmp == ENUM_EMPTY)
			return "EMPTY";
		else
			return "ERROR";
	}

	void printVector() {

		for (Wrapper tmp : this->wrapper_vector) {
			cout << tmp.toString() << endl;
		}
	}

	string toString() {

		string ss;

		ss.append(this->typeToString(this->getType()));

		ss.append(" : ");

		if (this->getType() == ENUM_NUMBER) {

			ss.append(std::to_string(this->getNumberValue()));
		}

		else if (this->getType() == ENUM_STRING) {

			ss.append(this->getStringValue());
		}
		else if (this->getType() == ENUM_BOOL) {

			ss.append(std::to_string(this->getBoolValue()));
		}
		else if (this->getType() == ENUM_LIST) {

			ss.append("SIZE: ");

			ss.append(std::to_string(this->getList().size()));

			ss.append("\n\n[\n\n");
			for (Wrapper tmp : wrapper_vector) {
				ss.append("\t" + tmp.toString() + " ,\n");
			}
			ss.append("]");

		}
		else if (this->getType() == ENUM_ARRAY) {

			ss.append("SIZE: ");

			ss.append(std::to_string(this->getArray().size()));

			ss.append("\n\n{");


			for (Wrapper tmp : wrapper_vector) {
				ss.append("\t");
				ss.append(tmp.toString());
				ss.append(",\n");
			}
			ss.append("}");

		}
		else if (this->getType() == ENUM_SENTENCE) {

			ss.append("\n");


			for (Wrapper tmp : wrapper_vector) {
				ss.append(tmp.getStringValue());
				ss.append(" ");
			}

		}
		else  if (this->getType() == ENUM_EMPTY) {

		}
		else {
			ss.append("666");
		}

		ss.append("\n");
		return ss;
	}


};

class show {

private:
	Wrapper wrap;
public:

	show(void) {};

	show(Wrapper x) {
		cout << x.toString();
	}
	show(int x) {
		cout << x;
	}
	show(double x) {
		cout << x;
	}
	show(float x) {
		cout << x;
	}
	show(std::string x) {
		cout << x;
	}

	~show(void) {};
};






Wrapper getItemArray(int n, Wrapper array) {

	return array.getObjArray(n);

}

void setItemArray(int n, Wrapper& array, Wrapper value) {

	array.setObjArray(n, value);
}


//LOGICAL

bool nott(Wrapper x) {

	if (x.getType() == ENUM_BOOL) {
		return x.getBoolValue();
	}
	else {
		return false;
	}
}

template <typename Wrapper>
Wrapper andd(Wrapper t) {

	return t;
}

template <typename Wrapper, typename... Rest>
bool andd(Wrapper t, Rest... rest) {

	return (t.getBoolValue() && andd(rest...));
}


bool operator&&(Wrapper wp1, Wrapper wp2) {

	if (
		wp1.getType() == ENUM_BOOL && wp2.getType() == ENUM_BOOL && wp1.getBoolValue() && wp2.getBoolValue()
		) {

		return true;
	}
	else {
		return false;
	}

}



template <typename Wrapper>
bool orr(Wrapper t) {
	return t;
}

template <typename Wrapper, typename... Rest>
bool orr(Wrapper t, Rest... rest) {

	return (t.getBoolValue() || orr(rest...));
}


bool operator||(Wrapper wp1, Wrapper wp2) {

	//cout << "THIS : " << this->getNumberValue() << "NEW:" << new_item.getNumberValue();
	if (
		wp1.getType() == ENUM_BOOL && wp2.getType() == ENUM_BOOL && wp1.getBoolValue() || wp2.getBoolValue()
		) {

		return true;
	}
	else {
		return false;
	}

}



//ARITHMETIC OPERATIONS
template <typename Wrapper>
float sum(Wrapper t) {
	return t.getNumberValue();
}

template <typename Wrapper, typename... Rest>
float sum(Wrapper t, Rest... rest) {

	return t.getNumberValue() + sum(rest...);
}

template <typename Wrapper>
float product(Wrapper t) {

	return t.getNumberValue();
}

template <typename Wrapper, typename... Rest>
float product(Wrapper t, Rest... rest) {
	return t.getNumberValue() * product(rest...);
}

Wrapper minuss(Wrapper x) {

	Wrapper new_w;
	if (x.getType() == ENUM_NUMBER)
	{
		new_w.setType(ENUM_NUMBER);
		new_w.setNumberValue(-(x.getNumberValue()));
		return new_w;
	}

	else {
		cout << "error in minuss" << endl;
		return nullptr;
	}




}

Wrapper modulo(Wrapper x, Wrapper y) {

	Wrapper new_w;
	if (x.getType() == ENUM_NUMBER && y.getType() == ENUM_NUMBER)
	{
		new_w.setType(ENUM_NUMBER);
		new_w.setNumberValue(fmod(x.getNumberValue(), y.getNumberValue()));
		return new_w;
	}
	else {
		cout << "error in modulo" << endl;
		return nullptr;
	}

}

Wrapper diff(Wrapper x, Wrapper y) {

	float a = 0;
	float b = 0;
	Wrapper new_w;

	if (x.getType() == ENUM_NUMBER && y.getType() == ENUM_NUMBER)
	{
		new_w.setType(ENUM_NUMBER);
		new_w.setNumberValue(x.getNumberValue() - y.getNumberValue());
		return new_w;
	}
	else {

		cout << "error in diff" << endl;
		return nullptr;
	}


}


Wrapper quotient(Wrapper x, Wrapper y) {

	float a = 0;
	float b = 0;
	Wrapper new_w;

	if (x.getType() == ENUM_NUMBER && y.getType() == ENUM_NUMBER)
	{
		new_w.setType(ENUM_NUMBER);
		new_w.setNumberValue(x.getNumberValue() / y.getNumberValue());
		return new_w;
	}
	else {

		cout << "error in diff" << endl;
		return nullptr;
	}


}

std::vector <Wrapper> operator+(Wrapper x, Wrapper y) {
	if (y.getType() == ENUM_LIST)
		return y.getList();
}



Wrapper arg(Wrapper x, int n) {
	return x.getList().at(n - 1);

}

Wrapper arg(Wrapper x, Wrapper n) {
	
	//cout << n.getNumberValue();

	if ((int)n.getNumberValue()-1 >= 0 && x.getList().size() >= (int)n.getNumberValue()+1) {
		//cout << x.getList().at((int)n.getNumberValue() - 1).toString();
		return x.getList().at((int)n.getNumberValue() - 1);
	}

	
}


ostream& operator<<(ostream& os, Wrapper wp)
{
	os << wp.toString();
	return os;
}

enum MyEnum
{
	ENUM_FORWARD, ENUM_BACK, ENUM_RIGHT, ENUM_LEFT, ENUM_CIRCLE,
	ENUM_PENSIZE, ENUM_SCREENCOLOR, ENUM_PENCOLOR, ENUM_SETXY
};
class funcs {

private:
	int param2;
	int param;
	MyEnum type;
	int setx;
	std::vector<float> tmp;

public:
	funcs() {}
	funcs(int x) {

		this->param = x;
		if (x == 1) {

			this->type = ENUM_FORWARD;

		}
		else if (x == 2) {
			this->type = ENUM_BACK;

		}
		else if (x == 3) {

			this->type = ENUM_RIGHT;

		}
		else if (x == 4) {

			this->type = ENUM_LEFT;

		}
		else if (x == 5) {

			this->type = ENUM_CIRCLE;

		}
		else if (x == 6) {

			this->type = ENUM_PENSIZE;

		}
		else if (x == 7) {

			this->type = ENUM_SCREENCOLOR;

		}
		else if (x == 8) {

			this->type = ENUM_PENCOLOR;

		}
		else if (x == 9) {

			this->type = ENUM_SETXY;
		}
	}

	funcs operator=(Wrapper x) {

		if (this->getType() == ENUM_FORWARD) {

			turtle_mv_forward(x.getNumberValue());

		}
		else if (this->getType() == ENUM_BACK) {

			turtle_mv_backward(x.getNumberValue());

		}
		else if (this->getType() == ENUM_RIGHT) {

			turtle_rotate((int)x.getNumberValue());

		}
		else if (this->getType() == ENUM_LEFT) {

			turtle_rotate((int)-x.getNumberValue());

		}
		else if (this->getType() == ENUM_CIRCLE) {

			turtle_draw_circle((int)x.getNumberValue());

		}
		else if (this->getType() == ENUM_PENSIZE) {

			set_pen_thickness(x.getNumberValue());

		}



		if (x.getType() == ENUM_LIST) {

			//cout << x.toString();

			if (this->getType() == ENUM_SCREENCOLOR) {

				set_screen_color((unsigned int)x.getList()[0].getNumberValue(), (unsigned int)x.getList()[1].getNumberValue(), (unsigned int)x.getList()[2].getNumberValue());

			}
			if (this->getType() == ENUM_PENCOLOR) {

				set_pen_color((unsigned int)x.getList()[0].getNumberValue(), (unsigned int)x.getList()[1].getNumberValue(), (unsigned int)x.getList()[2].getNumberValue());

			}

		}
		if (x.getType() == ENUM_STRING) {

			turtle_draw_label(x.getStringValue());
		}

		return *this;

	}



	funcs& operator=(int x) {

		setx = x;

		return *this;
	}



	funcs operator,(int  y) {


		turtle_go_to_position(setx, y);
		return *this;

	}


	MyEnum getType() {
		return this->type;
	}


};

#endif