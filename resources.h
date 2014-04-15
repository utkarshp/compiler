#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <stdlib.h>
#include <cstdio>
#include <iostream>

using namespace std;
extern int no_line;
#define MAXPARAM 50
#define STACKSIZE 512

enum type_enum{
Bool,
Long_long,
Char,
Int, 
Float, 
Double,
Void,
Pointer,
Useless,
Error

};
enum type_instr{
Jump,
Assignment,
Mipscode;
};


struct args {
	string var;
	int temp;
	int int_val;
	float float_val;
	int args_type;		// can be from 1 to 4
};

struct funcparams {
	args my_args[MAXPARAM];
	enum type_enum my_type[MAXPARAM];
	int dimension[MAXPARAM];
	int total;
};

struct lexemeNparam {
	funcparams my_params;
	string lexeme;
};

struct llm {
        enum type_enum my_type;
        int dimension;
        funcparams paramlist;
        int funcline;
};


struct code_element {
	enum type_instr data1; 	//Type of the instruction. If the instruction is Mipscode then we have
							// the mips statement in the order data2 arg1.var arg2.var result.var
	string data2;    //Lexeme of the operator
	struct args arg1;	//1st operand
	struct args arg2; 	//2nd operand
	struct args result; 	//Final result if data1 = Assignment, target of Jump if data1 = Jump.

	code_element()
	{
		data1 = Assignment;
		data2 = "";
	}
};

extern vector<code_element> global_code;

struct attr
{
	enum type_enum my_type;
	bool isreturn;
	struct args place;
	
	vector <code_element> code;
	char var_name[50][100];	
	int index;
	vector <int> truelist;
	vector <int> falselist;
	vector <int> nextlist;
	int dimension[50];
	attr() {isreturn = 0;}
};

/*

*/

struct symbol_table {
        vector <struct symbol_table *> children;
        struct symbol_table *parent;
        map <string, struct llm> table;
        symbol_table() {}
};

struct compiler {

string enumtostring(enum type_enum type)
{

        if(type==Bool) return "bool";
        if(type==Long_long) return "long long";
        if(type==Char) return "char";
        if(type==Int) return "int";
        if(Float==type) return "float";
        if(Double==type) return "double";
        if(Void==type) return "void";
        if(Pointer==type) return "Pointer";
}

void backpatch(vector <int> lines, int label) {
	int i;

	for (i=0;i<lines.size();i++)
	{
		global_code[lines[i]].result.int_val = label;
	}
}

vector <int> makelist(int p) {
	vector <int> new1;
	new1.push_back(p);
	return new1;
}

vector <int> merge_list(vector <int> l1,vector <int> l2) {
	
	for(int i=0; i<l1.size(); i++) {
		l2.push_back(l1[i]);
	}
	return l2;
 }
};
