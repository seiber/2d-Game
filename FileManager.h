#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <iostream>
#include <sstream>
class FileManager
{
public:
	FileManager();
	~FileManager();

	void LoadContent(const char* filename, std::vector<std::vector<std::string>>&attributes,
		std::vector<std::vector<std::string>> &contents);
private:
	std::vector<std::string> tempAttributes;
	std::vector <std::string> tempContents;
};

