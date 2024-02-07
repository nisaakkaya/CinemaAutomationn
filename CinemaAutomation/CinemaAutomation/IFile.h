#include<iostream>
#include<string>
#include<fstream>

using namespace std;
class IFile
{
private:
	string fileUrl = "C:\\Users\\ferhat\\source\\repos\\CinemaAutomation\\Data\\";
public:
	void readToFile(string fileName) 
	{
		ifstream read(fileUrl+fileName);
		string line;
		while (getline(read, line))
		{
			cout << line << endl;
		}
		read.close();
	}

	void writeToFile(string fileName, string data)
	{
		ofstream file(fileUrl+fileName);
		file << data;
		file.close();
	}

	void createToFile(string fileName, string description="")
	{
		ofstream file(fileUrl+fileName);
		file.close();
		cout << description << " Dosyasi olusturuldu" << endl;
	}
};

