#include <iostream>

using namespace std;

int main()
	{
		float score;

		cout<<"PLEASE ENTER SCORE: ";
		cin>>score;

		if(score <= 100 && score >= 80)
				cout<<"Grade for "<<score<<"%"<<" A."<<endl;
		else if(score <= 79 && score >= 75)
				cout<<"Grade for "<<score<<"%"<<" B+."<<endl;
		else if(score <= 74 && score >= 70)
				cout<<"Grade for "<<score<<"%"<<" B."<<endl;
		else if(score <= 69 && score >= 65)
				cout<<"Grade for "<<score<<"%"<<" C+."<<endl;
		else if(score <= 64 && score >= 60)
				cout<<"Grade for "<<score<<"%"<<" C."<<endl;
		else if(score <= 59 && score >= 55)
				cout<<"Grade for "<<score<<"%"<<" D+."<<endl;
		else if(score <= 54 && score >= 50)
				cout<<"Grade for "<<score<<"%"<<" D."<<endl;
		else if(score <= 49 && score >= 45)
				cout<<"Grade for "<<score<<"%"<<" E."<<endl;
        else
				cout<<"Grade for "<<score<<"%"<<" F."<<endl;

		return 0;
	}

