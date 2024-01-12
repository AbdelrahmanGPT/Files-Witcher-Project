#include <iostream>
#include<fstream>
#include"ABODAstd.h"
#include<filesystem>

using namespace std;

long long ReadNumberOfFiles()
{
    return ReadPositiveNumber("ENTER NUMBER OF FILES YOU WANT TO CREATE");
}

string ReadMainNameOfFiles()
{
    return ReadLineString("ENTER THE MAIN NAME OF FILES");
}

string ReadFilesExtension()
{
    return ReadString("ENTER THE EXTENSION OF FILES (EX : txt , ppt , pdf ,...)");
}

void FilesCreator()
{
    long long NumberOfFiles = ReadNumberOfFiles();
    string MainNameOfFiles = ReadMainNameOfFiles();
    string FilesExtension = ReadFilesExtension();
    
    for (long long FileNumber = 1; FileNumber <= NumberOfFiles; FileNumber++)
    {
        fstream File;
        string FileName = MainNameOfFiles + " " + to_string(FileNumber) + "." + FilesExtension;
        File.open(FileName, ios::out);
    }
   
    cout << "\nYOUR FILES IS CREATED SUCCESSFULLY\n\a";
}

int main()
{
    FilesCreator();
}

