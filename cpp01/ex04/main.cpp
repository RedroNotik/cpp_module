//
// Created by Gaynell Hanh on 3/20/22.
//

#include <iostream>
#include <fstream>
#include <string>

std::string readFile(const std::string &fileName)
{
	std::ifstream _infile(fileName);
	if (_infile.bad())
		return NULL;
	std::string _read;
	std::string _help;

	while (getline(_infile, _help))
		_read += _help + '\n';
	_infile.close();
	if (!_infile.good() && !_infile.eof())
	{
		std::cerr << "Exception opening/reading/closing fil1e\n";
		return (_read);
	}
	return (_read);
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Incorrect number of argv" << std::endl;
		return (1);
	}
	std::string _read = readFile(argv[1]);
	if (_read.empty())
	{
		std::cout << "Troubles with infile" << std::endl;
		return (1);
	}
	std::string filename;
	filename += argv[1];
	filename += ".replace";
	std::ofstream _outfile(filename);
	std::size_t pos = 0;
	while ((pos = _read.find(argv[2])) != std::string::npos)
		_read = _read.substr(0, pos) + argv[3] + _read.substr(pos + strlen
				(argv[2]), _read.length());
	_outfile << _read << std::endl;
	_outfile.close();
	if (!_outfile.good())
	{
		std::cerr << "Exception opening/reading/closing file\n";
		return (1);
	}
}
