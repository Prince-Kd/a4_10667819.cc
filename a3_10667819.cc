#include <iostream>

using namespace std;

int main()
	{
		float score;

		cout<<"PLEASE ENTER SCORE: ";
		cin>>score;

		if(score <= 100 && score >= 80)
				cout<<"Grade for "<<score<<"%"<<" is A."<<endl;
		else if(score <= 79 && score >= 75)
				cout<<"Grade for "<<score<<"%"<<" is B+."<<endl;
		else if(score <= 74 && score >= 70)
				cout<<"Grade for "<<score<<"%"<<" is B."<<endl;
		else if(score <= 69 && score >= 65)
				cout<<"Grade for "<<score<<"%"<<" is C+."<<endl;
		else if(score <= 64 && score >= 60)
				cout<<"Grade for "<<score<<"%"<<" is C."<<endl;
		else if(score <= 59 && score >= 55)
				cout<<"Grade for "<<score<<"%"<<" is D+."<<endl;
		else if(score <= 54 && score >= 50)
				cout<<"Grade for "<<score<<"%"<<" is D."<<endl;
		else if(score <= 49 && score >= 45)
				cout<<"Grade for "<<score<<"%"<<" is E."<<endl;
        else
				cout<<"Grade for "<<score<<"%"<<" is F."<<endl;

		return 0;
	}

