#ifndef GPACalculator_H
#define GPACalculator_H

class GPACalculator
{
	private:
		float totalGPA;
		float totalCreditHours;
		int numSubjects;
		
	public:
		void getMarks()
		{
			float obtainedMarks,totalMarks,creditHours;
			totalGPA=0.0;
			totalCreditHours=0.0;
			
			cout<<"Enter the Number of Subjects: ";
			cin>>numSubjects;
			
			for(int i=0;i<numSubjects;i++)
			{
				cout<<"Enter obtained Marks for Subject "<<i+1<<": ";
				cin>>obtainedMarks;
				cout<<"Enter Total Marks for Subject "<<i+1<<": ";
				cin>>totalMarks;
				cout<<"Enter Credit Hours for Subject "<<i+1<<": ";
				cin>>creditHours;
				cout<<"\n";
				
				float percentage=(obtainedMarks/totalMarks)*100;
				
			}		
		}
		
		float calculateGPA(float percentage)
		{
			if(percentage>=90)
			{
				return 4.0;
			}
			else if (percentage >= 80 && percentage <=89.9)
			{
	            return 4.0;
	        } 
			else if (percentage >= 72 && percentage <=79.9)
			{
	            return 3.5;
	        } 
			else if (percentage >= 65 && percentage <=71.9 )
			{
	            return 3.0;
	        } 
			else if (percentage >= 50 && percentage <=64.9)  
			{
	            return 2.0;
	        } 
			else 
			{
	            return 0.0;
	        }
	        
		}
			
		string getGrade(float gpa)
		{
			if(gpa==4.0)
			{
				return "A+";
			}
			else if(gpa>=3.5)
			{
				return "A";   
			}
			else if(gpa>=3.0)
			{
				return "B+";   
			}			
			else if(gpa>=2.0)
			{
				return "C"; ;
			}
			else
			{
				return "F"; 
			}						
		}
		
	void print_semester_GPA()
	{
		float semesterGPA=totalGPA/totalCreditHours;
		cout << "\nYour semester GPA is: " << semesterGPA << endl;
 	}	
};
