#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	char name[15];
	cout<<"Enter the first name:"<<endl;
	cin.getline(name,15);
	char last_name[15];
	cout<<"Enter the second name:"<<endl;
	cin.getline(last_name,15);
	
	
	char full_name[30];
	strcpy(full_name,name);
	strcat(full_name," ");
	strcat(full_name,last_name);
	cout << "Concatenated Name:" << full_name<< endl;
	cout<<"Length of concatenated name:"<<strlen(full_name)<<endl;
	
	cout<<"Initials:"<<name[0]<<"."<<last_name[0]<<"."<<endl;
	
	int vowel_count = 0;
    const char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    
    for (int i = 0; i < strlen(full_name); ++i) 
	{
        for (int j = 0; j < sizeof(vowels) / sizeof(vowels[0]); ++j) 
		{
            if (full_name[i] == vowels[j])
			{
                vowel_count++;
            }
        }
    }
    
    cout << "Number of vowels in the names: " << vowel_count <<endl;
	
	
	cin.ignore();
	return 0;
}
