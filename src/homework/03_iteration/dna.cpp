#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const std::string& dna) 
{
	double count = 0;
	double gc_content = 0;

	for (auto ch : dna) 
	{
		if (ch == 'C' || ch == 'c' || ch == 'G' || ch == 'g') 
		{
			count += 1;
		}
	}

	gc_content = count / dna.size();

	return gc_content;

}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
std::string get_reverse_string(std::string dna) 
{
	std::string reverse;

	for (std::size_t i = dna.size()-1; i != -1; --i) //indexes start at 0 to dna.size -1 
	{
		reverse.push_back(dna[i]);
	}

	return reverse;
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
std::string get_dna_complement(std::string dna) 
{
	std::string complement = get_reverse_string(dna);

	for (auto& ch: complement) 
	{
		if (ch == 'A' || ch == 'a') 
		{
			ch = 'T';
		}
		else if(ch == 'T' || ch == 't')
		{
			ch = 'A';
		}
		else if (ch == 'C' || ch == 'c')
		{
			ch = 'G';
		}
		else if (ch == 'G' || ch == 'g')
		{
			ch = 'C';
		}
	}

	return complement;
}

