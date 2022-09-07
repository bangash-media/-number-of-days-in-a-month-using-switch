#include <iostream>

using namespace std;
/*A program that print the total number of days in a month number entered by
user*/
int main() 
{
	int month; //declaring variables 
 	char leap; //declaring variabl for the month february february
 	cout<<"\n\n\n\t\t\tNumber Of Days In A Month"<<endl<<endl;
 	cout<<"Please Enter Month Number: "; cin>>month;
 	switch (month)
 	{
 		case 1: // condition
 		cout<<"\nJanuary Has 31 Days";
 		break;
 			case 3: // condition
 			cout<<"\nMarch Has 31 Days";
 		break;
 				case 5: // condition
 				cout<<"\nMay Has 31 Days";
 		break;
 					case 7: // condition
 					cout<<"\nJuly Has 31 Days";
 		break;
 						case 8: // condition
 						cout<<"\nAugust Has 31 Days";
 		break;
 							case 10: // condition
 							cout<<"\nOctober Has 31 Days";
 		break;
 								case 12: // condition
 								cout<<"\nDecember Has 31 Days";
 		break;
							
							
 		    case 4: // condition
 		    cout<<"\nApril Has 31 Days";
 		break;
 			    case 6: // condition
 			    cout<<"\nJun Has 31 Days";
 		break;
 				    case 9: // condition
 				    cout<<"\nSeptember Has 31 Days";
 		break;
 					    case 11: // condition
 					    cout<<"\nNovember Has 31 Days";
 		break;
 			                
 		
 
 		case 2: //condition
 			cout<<"\nEnter Y/N for leap year: ";
 			cin>>leap;
 			switch (leap) //again using switch for leap year
			 {
			 	case 'y':
			 	case 'Y':
			 		cout<<"\nFebruary Leap year Has 29 Days";
			 	break;
			 	case 'n':
			 	case 'N':
			 		cout<<"\nFebruary non Leap year Has 28 Days";
			 	break;
			 	default: // default for leap year
			 	    cout<<"\nInvalid Option";
			} 
 	    break;
	 default: // default for month number
 		cout<<"Invalid Option";		
}
	
	return 0;
}
