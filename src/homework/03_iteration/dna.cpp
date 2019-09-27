#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string &dna)
{
	double gc_count = 0;
	double dna_ch_count = 0;   
	//double dna_ch_count = dna.length();  
	//double dna_ch_count = dna.size();
	double gc_content;

	for (char ch : dna)
	{
		++dna_ch_count;

		if (ch == 'C' || ch == 'G')
		{
			++gc_count;
		}
		gc_content = gc_count / dna_ch_count;
	}
	return gc_content;
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna)
{ 
	string reverse_dna;
	
	for (int i = dna.size() - 1; i >= 0; i--)
	{
		reverse_dna = dna[i];
		
	}
	return reverse_dna;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string
*/

string get_dna_complement(string dna)
{
	string rev_dna_comp = get_reverse_string(dna);

	for (char & ch : rev_dna_comp)
	{
		if (ch == 'A')
		{
			ch = 'T';
		}
		else if (ch == 'T')
		{
			ch = 'A';
		}
		else if (ch == 'G')
		{
			ch = 'C';
		}
		else if (ch == 'C')
		{
			ch = 'G';
		}
	}
	return rev_dna_comp;
}