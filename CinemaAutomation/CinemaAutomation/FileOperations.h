#include<iostream>
#include<string>
#include<fstream>

#ifndef FILEOPERATIONS_H
#define FILEOPERATIONS_H 

using namespace std;
class FileOperations
{
private:
	string location = "C:\\Users\\nisan\\Desktop\\CinemaAutomation2\\CinemaAutomation2\\CinemaAutomation\\CinemaAutomation\\Data\\";
public:
	void readToFile(string fileLocation, string fileName)
	{
		ifstream read(location + fileLocation + fileName);
		string line;
		while (getline(read, line))
		{
			cout << line << endl;
		}
		read.close();
	}

	void writeToFile(string fileName, string fileLocation, string data)
	{
		ofstream file(location + fileLocation + fileName);
		file << data;
		file.close();
	}

	void createToFile(string fileName, string fileLocation, string description = "")
	{
		ofstream file(location + fileLocation + fileName);
		file.close();
		cout << description << " Dosyasi olusturuldu" << endl;
	}

	string* readFile(string fileLocation, string fileName)
	{
		ifstream read(location + fileLocation + fileName);
		string data = "";
		string line;
		string* arr = new string[10];
		int count = 0;
		while (getline(read, line))
		{
			arr[count] = line;
			count++;
		}
		read.close();
		return arr;
	}

	string readFileWithIndex(string url, int index) {
		ifstream read(location + url);
		string line;
		int count = 0;
		while (getline(read, line))
		{
			if (count == index) {
				return line;
			}
			count++;
		}
		read.close();
		
		return "Bu indexte Data Yok!";
	}
	
};

#endif FILEOPERATIONS_H